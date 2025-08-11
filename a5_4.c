/*
 * CH-230-A
 * a5-p4.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>
#include <stdlib.h>

// Function to divide each element of the array by 5
void divby5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] / 5;
    }
}

int main() {
    int n;
    float *arr;

    // Prompt the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n elements
    arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input n floating-point numbers
    printf("Enter %d floating-point numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Display the array before division
    printf("Before:\n");
    for (int i = 0; i < n; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    // Divide each element by 5
    divby5(arr, n);

    // Display the array after division
    printf("After:\n");
    for (int i = 0; i < n; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
