/*
 * CH-230-A
 * a5-p6.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Get the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    float *arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Get the elements of the array
    printf("Enter %d float numbers (at least one should be negative):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Pointer to traverse the array
    float *ptr = arr;

    // Move the pointer until a negative value is found
    while (*ptr >= 0) {
        ptr++;
    }

    // Calculate the number of elements before the first negative value
    int count = ptr - arr;

    printf("Before the first negative value: %d elements\n", count);

    // Free the allocated memory
    free(arr);

    return 0;
}
