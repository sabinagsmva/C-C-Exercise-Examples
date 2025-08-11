/*
 * CH-230-A
 * a4-p6.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */
#include <stdio.h>
#include <stdlib.h> // For malloc and free

// Function to find and print the two greatest values
void find_two_greatest(int *arr, int n) {
    int max1, max2;

    // Initialize the first two values as the two greatest values
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    // Iterate through the rest of the array
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1; // Update second greatest
            max1 = arr[i]; // Update greatest
        } else if (arr[i] > max2) {
            max2 = arr[i]; // Update second greatest
        }
    }

    printf("The two greatest values are: %d and %d\n", max1, max2);
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to find and print the two greatest values
    find_two_greatest(arr, n);

    // Free the allocated memory
    free(arr);

    return 0;
}
