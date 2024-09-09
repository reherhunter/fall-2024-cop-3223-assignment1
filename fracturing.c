// Assignment 1 
// Hunter Reher
// UCF ID: 5538741

// In this code, we will be using separate functions to find specific values for a circle.

#include <stdio.h>
#include <math.h> // math library isn't importing for some reason, so we need to use gcc -o fracturing fracturing.c -lm

// PI
#define PI 3.14159

// Defining Functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

double calculateDistance() {
    // Point #1
    printf("Enter the coordinates for Point #1 (x1, y1):\n");
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    
    // Point #2
    printf("Enter the coordinates for Point #2 (x2, y2):\n");
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    // Calculate using distance formula
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The diameter of the city is %.2f\n", distance);

    return distance;
}

double calculatePerimeter() {
    double diameter = calculateDistance();
    double perimeter = PI * diameter; // Circumference of the circle

    printf("The perimeter (circumference) of the city encompassed by your request is %.2f\n", perimeter);
    
    // Difficulty rating
    return 2.0; 
}

double calculateArea() {
    double diameter = calculateDistance();
    double radius = diameter / 2;
    double area = PI * pow(radius, 2); // Area of the circle

    printf("The area of the city encompassed by your request is %.2f\n", area);

    // Difficulty rating
    return 3.0; 
}

double calculateWidth() {
    double diameter = calculateDistance();

    // For a circle, width is the same as diameter
    printf("The width of the city encompassed by your request is %.2f\n", diameter);

    // Difficulty rating
    return 4.0; 
}

double calculateHeight() {
    double diameter = calculateDistance();

    // For a circle, height is the same as diameter
    printf("The height of the city encompassed by your request is %.2f\n", diameter);

    // Difficulty rating
    return 2.0; 
}

// BONUS: 
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}
