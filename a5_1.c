/*
 * CH-230-A
 * a5-p1.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

// Function to print triangle
void printTriangle(int n, char ch){
    for(int i=n; i>0;i--){
        for(int j=0; j<i; j++){
            printf("%c", ch);
        }
        printf("\n")
    }
}

int main(){
    int n;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter a character: ");
    scanf(" %c", &ch);  // The space before %c is used to skip any newline left in the buffer

    // Calling the function to print the triangle
    printTriangle(n, ch);

    return 0;

}
