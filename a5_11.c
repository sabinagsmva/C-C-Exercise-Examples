/*
 * CH-230-A
 * a5-p11.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

// Recursive function to check if n is divisible by any number from d down to 2
int checkDivisor(int n, int d) {
    if (d == 1) {
        return 1;  // If we reach 1, then n is prime
    }
    if (n % d == 0) {
        return 0;  // If n is divisible by d, n is not prime
    }
    return checkDivisor(n, d - 1);  //check the next smaller divisor
}

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) {
        return 0;  // numbers less than 2 are not prime
    }
    return checkDivisor(n, n - 1);  // Start checking divisibility from n-1
}

int main() {
    int x;
    printf("Enter a positive integer: ");
    scanf("%d", &x);

    if (isPrime(x)) {
        printf("%d is prime\n", x);
    } else {
        printf("%d is not prime\n", x);
    }

    return 0;
}
