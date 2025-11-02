#include <stdio.h>
int findHCF_Recursive(int a, int b) {
     if (b == 0) {
        return a;
    }
   
    return findHCF_Recursive(b, a % b);
}

int main() {
    int num1, num2, hcf_result;

    printf("Enter the first positive integer: ");
    scanf("%d", &num1);
    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1;
    }
    hcf_result = findHCF_Recursive(num1, num2);
    printf("\n--- Result (Recursive) ---\n");
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf_result);

    return 0;
}