#include <stdio.h>
#include <stdbool.h> 
#define SIZE 10 

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
   
    int numbers[SIZE] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int prime_count = 0;
    
    printf("--- Prime Number Counter in Array ---\n");
    printf("Input Array: {");
    for (int i = 0; i < SIZE; i++) {
        printf("%d%s", numbers[i], (i < SIZE - 1) ? ", " : "");
    }
    printf("}\n\n");

    printf("Primes Found:\n");
    for (int i = 0; i < SIZE; i++) {
        int current_num = numbers[i];

        if (is_prime(current_num)) {
            printf("- %d is a prime number.\n", current_num);
            prime_count++;
        }
    
    }
    printf("Total number of prime numbers found in the array: %d\n", prime_count);
    return 0;
}
