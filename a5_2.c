/*
 * CH-230-A
 * a5-p2.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

// Function to divide each element of the array by 5
void divby5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] / 5.0;  // Divide each element by 5
    }
}

int main() {
    // Declare and initialize the array
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size = 6;  // Get the size of the array

    // Print the array before division
    printf("Before:\n");
    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    // Call the function to divide each element by 5
    divby5(arr, size);

    // Print the array after division
    printf("After:\n");
    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    return 0;
}
