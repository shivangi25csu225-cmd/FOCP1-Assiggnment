#include <stdio.h>
#include <math.h> 
void decimalToBinary(int decimal) {
    if (decimal < 0) {
        printf("Cannot convert negative numbers directly in this simple model.\n");
        return;
    }
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }
    long long binary = 0;
    int remainder, i = 1;
    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i; 
        i *= 10;
    }
    printf("Binary: %lld\n", binary);
}
void binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10; 
        binary /= 10;  
        decimal += remainder * pow(2, i); 
        i++;
    }
    printf("Decimal: %d\n", decimal);
}
int main() {
    int choice;
    printf("\n--- Number System Converter ---\n");
    printf("1. Convert Decimal to Binary\n");
    printf("2. Convert Binary to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1) {
        int dec;
        printf("Enter a positive decimal number: ");
        scanf("%d", &dec);
        decimalToBinary(dec);
    } 
    else if (choice == 2) {
        long long bin;
        printf("Enter a binary number (e.g., 10110): ");
        scanf("%lld", &bin);
        binaryToDecimal(bin);
    } 
    else {
        printf("Invalid choice. Please run the program again and enter 1 or 2.\n");
    }

    return 0;
}