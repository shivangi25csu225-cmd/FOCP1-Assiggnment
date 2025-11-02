#include <stdio.h>
int add_bitwise(int a, int b) {
    int carry;
    while (b != 0) {
        carry = a & b; 
        a = a ^ b; 
        b = carry << 1; 
    }
    return a;
}
int subtract_bitwise(int A, int B) {
     int ones_complement_B = ~B;
     int twos_complement_B = add_bitwise(ones_complement_B, 1);
return add_bitwise(A, twos_complement_B);
}

int main() {
    int num1, num2, result;
    printf("Enter the first integer (A): ");
    scanf("%d", &num1);
    printf("Enter the second integer (B): ");
    scanf("%d", &num2);
    result = subtract_bitwise(num1, num2);
    printf("\n--- Bitwise Subtraction Result ---\n");
    printf("%d - %d = %d\n", num1, num2, result);

    return 0;
}