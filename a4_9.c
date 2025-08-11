/*
 * CH-230-A
 * a4-p9.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>
#include <stdlib.h>

// Function to calculate the product of the smallest and largest element
int prodminmax(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];

    // Loop through the array to find the smallest and largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return min * max;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read n integers and store them in the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function prodminmax to get the product of the smallest and largest element
    int result = prodminmax(arr, n);

    printf("The product of the smallest and largest element is: %d\n", result);

    // Free the allocated memory
    free(arr);

    return 0;
}
