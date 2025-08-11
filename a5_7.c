/*
 * CH-230-A
 * a5-p7.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Two strings that can each hold up to 100 characters (plus one extra for the null terminator)
    char str1[101], str2[101];

    printf("Enter the first string (up to 100 characters): ");
    fgets(str1, sizeof(str1), stdin);

    // Check if a newline character was added and remove it
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }

    printf("Enter the second string (up to 100 characters): ");
    fgets(str2, sizeof(str2), stdin);

    // Remove the newline from the second string if present
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }
    int total_len = strlen(str1) + strlen(str2) + 1;  // +1 for the null terminator

    // Dynamically allocate memory for the concatenated string
    char *concatenated_str = (char *)malloc(total_len * sizeof(char));
    if (concatenated_str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Copy the first string and append the second string
    strcpy(concatenated_str, str1);
    strcat(concatenated_str, str2);

    printf("Concatenated string: %s\n", concatenated_str);

    // Free the allocated memory
    free(concatenated_str);

    return 0;
}
