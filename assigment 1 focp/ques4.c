#include <stdio.h>
void swap_temp(int *a, int *b) {
    printf("\n--- 1. Temporary Variable Method ---\n");
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_arithmetic(int *a, int *b) {
    printf("\n--- 2. Arithmetic Method ---\n");
    *a = *a + *b;  
    *b = *a - *b;
    *a = *a - *b;
}
void swap_xor(int *a, int *b) {
    printf("\n--- 3. Bitwise XOR Method ---\n");
    *a = *a ^ *b; 
    *b = *a ^ *b; 
    *a = *a ^ *b; 
}
void swap_pointers(int **p_a, int **p_b) {
    printf("\n--- 4. Pointer Manipulation Method (Swap Pointers) ---\n");
    int *temp_ptr = *p_a;
    *p_a = *p_b;
    *p_b = temp_ptr;
    printf("NOTE: This swaps the memory addresses held by the pointers, achieving a swap in effect.\n");
}
int main() {
    int x = 10, y = 20;
    int *ptr_x = &x; 
    int *ptr_y = &y;
    printf("Initial Values: x = %d, y = %d\n", x, y);
    swap_temp(&x, &y);
    printf("After Temp Swap: x = %d, y = %d\n", x, y);  
    x = 10; y = 20; 
    swap_arithmetic(&x, &y);
    printf("After Arithmetic Swap: x = %d, y = %d\n", x, y); 
    x = 10; y = 20; 
    swap_xor(&x, &y);
    printf("After XOR Swap: x = %d, y = %d\n", x, y); 
    printf("\nInitial Pointer Values: *ptr_x = %d, *ptr_y = %d\n", *ptr_x, *ptr_y);
    swap_pointers(&ptr_x, &ptr_y);
    printf("After Pointer Swap: *ptr_x = %d, *ptr_y = %d\n", *ptr_x, *ptr_y); 

    return 0;
}