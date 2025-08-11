/*
 * CH-230-A
 * a3-p7.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

// Function to print the trapezoid
void print_form(int n, int m, char c) {
    // Loop through the height of the trapezoid (n rows)
    for (int i = 0; i < n; i++) {
        // Print m + i characters in each row
        for (int j = 0; j < m + i; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    char c;

    printf("Enter height (n): ");
    scanf("%d", &n);
    printf("Enter top base length (m): ");
    scanf("%d", &m);
    printf("Enter character to print (c): ");
    scanf(" %c", &c);

    // Call the function to print the trapezoid
    print_form(n, m, c);

    return 0;
}
