/*
 * CH-230-A
 * a4-p3.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>
#include <math.h>

#define MAX_SIZE 15

// Function prototypes
float geometric_mean(float arr[], int num);
float find_max(float arr[], int num);
float find_min(float arr[], int num);
float sum_array(float arr[], int num);

int main() {
    float arr[MAX_SIZE];
    int count = 0;
    float num;
    char choice;

    // Input numbers
    printf("Enter up to 15 positive numbers (a negative number ends input):\n");
    while (count < MAX_SIZE) {
        scanf("%f", &num);
        if (num < 0) break;
        arr[count++] = num;
    }

    // If no valid input, avoid asking for operations
    if (count == 0) {
        printf("No numbers entered.\n");
        return 0;
    }

    // Menu and operations
    printf("Enter 'm' for geometric mean, 'h' for highest value, 'l' for lowest value, 's' for sum: ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'm':
            printf("Geometric mean: %.4f\n", geometric_mean(arr, count));
            break;
        case 'h':
            printf("Highest value: %.4f\n", find_max(arr, count));
            break;
        case 'l':
            printf("Lowest value: %.4f\n", find_min(arr, count));
            break;
        case 's':
            printf("Sum of array: %.4f\n", sum_array(arr, count));
            break;
        default:
            printf("Invalid option.\n");
            break;
    }

    return 0;
}

// Function to compute geometric mean
float geometric_mean(float arr[], int num) {
    float product = 1.0;
    for (int i = 0; i < num; i++) {
        product *= arr[i];
    }
    return pow(product, 1.0 / num);
}

// Function to find the maximum value
float find_max(float arr[], int num) {
    float max = arr[0];
    for (int i = 1; i < num; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum value
float find_min(float arr[], int num) {
    float min = arr[0];
    for (int i = 1; i < num; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to compute sum of the array
float sum_array(float arr[], int num) {
    float sum = 0.0;
    for (int i = 0; i < num; i++) {
        sum += arr[i];
    }
    return sum;
}
