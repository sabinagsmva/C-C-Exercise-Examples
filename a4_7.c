/*
 * CH-230-A
 * a4-p7.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

#define MAX_SIZE 30

// Function to print the matrix
void print_matrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    printf("The entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to print the elements under the main diagonal
void print_under_diagonal(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    printf("Under the main diagonal:\n");
    for (int i = 1; i < n; i++) {  // Start from row 1 since row 0 has no elements under the diagonal
        for (int j = 0; j < i; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int n;

    // Read the number of rows and columns
    printf("Enter the number of rows and columns (n): ");
    scanf("%d", &n);

    // Read the matrix values row by row
    printf("Enter the matrix values row by row:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call function to print the matrix
    print_matrix(matrix, n);

    // Call function to print elements under the main diagonal
    print_under_diagonal(matrix, n);

    return 0;
}
