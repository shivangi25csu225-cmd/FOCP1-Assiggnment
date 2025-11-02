#include <stdio.h>
void generateFibonacci(int n) {   
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    printf("\nFibonacci Series up to %d terms:\n", n);
    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return;
    }
    if (n >= 1) {
        printf("%d", t1); 
    }
    if (n >= 2) {
        printf(", %d", t2); 
    }
    for (int i = 3; i <= n; i++) { 
        nextTerm = t1 + t2; 
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}
int main() {
    int n_terms;

    printf("Enter the number of terms 'n' for the Fibonacci series: ");
    if (scanf("%d", &n_terms) != 1 || n_terms < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    generateFibonacci(n_terms);

    return 0;
}