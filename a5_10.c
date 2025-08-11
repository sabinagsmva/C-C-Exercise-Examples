/*
 * CH-230-A
 * a5-p10.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

// Recursive function to print numbers from n to 1
void printNumbers(int n) {
    if (n > 0) {  // when n is greater than 0
        printf("%d ", n);  // Print the current number
        printNumbers(n - 1);  // Recursive call with n-1
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printNumbers(n);

    return 0;
}
