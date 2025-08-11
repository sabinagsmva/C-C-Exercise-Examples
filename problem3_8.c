/*
 * CH-230-A
 * a3-p8.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

#define MAX 10  // Maximum number of floats

// Function to calculate the sum of the array
float calculate_sum(float arr[], int count) {
    float sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of the array
float calculate_average(float sum, int count) {
    return count == 0 ? 0 : sum / count;  // Ternary operator to avoid division by 0
}

int main() {
    float numbers[MAX];  // Array to store numbers
    int count = 0;  // To track how many numbers are entered
    float input;  // To store the user's input

    printf("Enter up to 10 float numbers (-99.0 to stop):\n");

    // Reading up to MAX numbers or until -99.0 is entered
    for (int i = 0; i < MAX; i++) {
        scanf("%f", &input);

        if (input == -99.0) {
            break;  // Stop reading if -99.0 is entered
        }

        numbers[count++] = input;  // Store input in the array and increment count
    }

    // Compute sum and average
    float sum = calculate_sum(numbers, count);
    float average = calculate_average(sum, count);

    // Print the results
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
