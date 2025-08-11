/*
 * CH-230-A
 * a4-p1.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */


#include <stdio.h>
#define PI 3.14159265358979323846

// to calculate the area of a circle
double area_of_circle(double radius) {
    return  PI * radius * radius ;
}


// Function to calculate the perimeter (circumference) of a circle
double perimeter_of_circle(double radius) {
    return 2 * PI * radius;
}

int main() {
    double lower_limit, upper_limit, step_size;

    // Asking for user input
    printf("Enter the lower limit: ");
    scanf("%lf", &lower_limit);
    printf("Enter the upper limit: ");
    scanf("%lf", &upper_limit);
    printf("Enter the step size: ");
    scanf("%lf", &step_size);

    // Printing the table header
    printf("\nRadius\t\tArea\t\tPerimeter\n");

    // For loop to print the values from lower limit to upper limit
    for (double x = lower_limit; x <= upper_limit; x += step_size) {
        double area = area_of_circle(x);
        double perimeter = perimeter_of_circle(x);

        // Printing radius, area, and perimeter
        printf("%lf\t%lf\t%lf\n", x, area, perimeter);
    }

    return 0;
}
