/*
 * CH-230-A
 * a3-p6.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

// Function to convert kilograms and grams to pounds
float to_pounds(int kg, int g) {
    float total_kg=kg + g\1000.0;
    return total_kg*2.2;
}
int main() {
    int kg, g;
    float pounds;
    printf("Kilograms: ");
    scanf("%d", &kg);
    printf("Grams: ");
    scanf("%d", &g);

    // Convert to pounds using the to_pounds function
    pounds = to_pounds(kg, g);

    // Output the result
    printf("The weight in pounds is: %.2f\n", pounds);

    return 0;
}