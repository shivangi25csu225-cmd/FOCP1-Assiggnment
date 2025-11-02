#include <stdio.h>
#define SIZE 5 

void print_array(const int arr[], int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i < size - 1) ? ", " : "");
    }
    printf("}\n");
}
void rotate_clockwise_by_one(int arr[], int size) {
    if (size <= 1) {
        return; 
    }
    int last_element = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {  
        arr[i] = arr[i - 1];
    } 
    arr[0] = last_element;
}
int main() {
    
    int arr1[SIZE] = {1, 2, 3, 4, 5};
    
    printf("Cyclic Array Rotation (Clockwise)\n");
    
    printf("Test Case 1:\n");
    printf("Original Array: ");
    print_array(arr1, SIZE);
    
    rotate_clockwise_by_one(arr1, SIZE);
    
    printf("Rotated Array:  ");
    print_array(arr1, SIZE);
    int arr2[SIZE] = {2, 3, 4, 5, 1};

    printf("Test Case 2:\n");
    printf("Original Array: ");
    print_array(arr2, SIZE);
    
    rotate_clockwise_by_one(arr2, SIZE);
    printf("Rotated Array:  ");
    print_array(arr2, SIZE);
    
    return 0;
}
