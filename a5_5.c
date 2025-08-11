/*
 * CH-230-A
 * a5-p5.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

// Function to calculate the scalar product of two lists
double scalar_product(double v[], double w[], int n) {
    double product_sum = 0;  // This will hold the total sum of the products
    for (int i = 0; i < n; i++) {
        product_sum += v[i] * w[i];  // Multiply corresponding numbers and add to the total
    }
    return product_sum;
}

// Function to find the smallest number and its position in a list
void find_smallest(double arr[], int n, double *smallest, int *position) {
    *smallest = arr[0];  // Start with the first number as the smallest
    *position = 0;       // Start by assuming the smallest is at position 0
    for (int i = 1; i < n; i++) {  // Loop through the rest of the list
        if (arr[i] < *smallest) {
            *smallest = arr[i];  // Update the smallest number
            *position = i;       // Update its position
        }
    }
}

// Function to find the largest number and its position in a list
void find_largest(double arr[], int n, double *largest, int *position) {
    *largest = arr[0];  // Start with the first number as the largest
    *position = 0;      // Assume it's at position 0 for now
    for (int i = 1; i < n; i++) {  // Loop through the list to find the largest
        if (arr[i] > *largest) {
            *largest = arr[i];  // Update the largest number
            *position = i;      // Update its position
        }
    }
}

int main() {
    int n;

    // Get the number of items in each list
    printf("How many numbers in each list? ");
    scanf("%d", &n);

    double v[n], w[n];  // Declare two lists with n elements each

    // Get the numbers for the first list
    printf("Enter the numbers for the first list (v):\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }

    // Get the numbers for the second list
    printf("Enter the numbers for the second list (w):\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &w[i]);
    }

    // Calculate and display the scalar product
    double product = scalar_product(v, w, n);
    printf("Scalar product = %.6lf\n", product);

    double smallest, largest;
    int pos_smallest, pos_largest;

    find_smallest(v, n, &smallest, &pos_smallest);
    printf("Smallest in first list = %.6lf (position %d)\n", smallest, pos_smallest);

    find_largest(v, n, &largest, &pos_largest);
    printf("Largest in first list = %.6lf (position %d)\n", largest, pos_largest);

    // Find and display the smallest and largest in the second list (w)
    find_smallest(w, n, &smallest, &pos_smallest);
    printf("Smallest in second list = %.6lf (position %d)\n", smallest, pos_smallest);

    find_largest(w, n, &largest, &pos_largest);
    printf("Largest in second list = %.6lf (position %d)\n", largest, pos_largest);

    return 0;
}
