#include <stdio.h>

void printBinaryPyramid(int rows) {
    int i, j; 
    printf("\nBinary Pyramid Pattern (for %d rows):\n", rows);  
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) { 
            if (j % 2 != 0) {
                printf("0");
            } else {
                printf("1");
            }
        } 
        printf(" ");
        for (j = 1; j <= i; j++) {
            if (j % 2 != 0) {
                printf("0");
            } else {
                printf("1");
            }
        } 
        printf("\n");
    }
}

int main() {
    int num_rows;
    printf("Enter the number of rows for the binary pyramid: ");
    if (scanf("%d", &num_rows) != 1 || num_rows <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    printBinaryPyramid(num_rows);

    return 0;
}