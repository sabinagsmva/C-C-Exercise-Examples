/*
 * CH-230-A
 * a4-p7.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>
#include <math.h> // For the pow() function

// Function to compute the product, division, power, and inverse of b
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb) {
    *prod = a * b;        // Product of a and b
    *div = a / b;         // Division of a by b
    *pwr = pow(a, b);     // a raised to the power of b
    *invb = 1 / b;        // Inverse of b
}

int main() {
    float a, b;
    float prod, div, pwr, invb;

    // Read values for a and b from the user
    printf("Enter two floating-point numbers:\n");
    scanf("%f %f", &a, &b);

    // Call the function to compute the results
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    printf("Product of a and b: %.2f\n", prod);
    printf("Division of a by b: %.2f\n", div);
    printf("a raised to the power of b: %.2f\n", pwr);
    printf("Inverse of b: %.2f\n", invb);

    return 0;
}
