#include <stdio.h>
#include <stdbool.h> 
#define MAX_SIZE 100

void printArray(int arr[], int size) {
    if (size == 0) {
        printf("[]\n");
        return;
    }
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
bool insertElement(int arr[], int *current_size, int element, int position) {
    
    if (*current_size >= MAX_SIZE) {
        printf("Error: Array is full. Cannot insert %d.\n", element);
        return false;
    }
    if (position < 1 || position > *current_size + 1) {
        printf("Error: Invalid position %d. Must be between 1 and %d.\n", position, *current_size + 1);
        return false;
    }
    int index = position - 1;
    for (int i = *current_size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    (*current_size)++;
    printf("Successfully inserted %d at position %d (index %d).\n", element, position, index);
    return true;
}
int main() {
    int my_array[MAX_SIZE] = {10, 20, 30, 40};
    int size = 4; 
    printf("Initial Array (Size: %d):\n", size);
    printArray(my_array, size);
    printf("\n Inserting at FRONT \n");
    insertElement(my_array, &size, 5, 1);
    printf("Array after front insertion:\n");
    printArray(my_array, size); 
    printf("\n Inserting at MIDDLE \n");
    insertElement(my_array, &size, 99, 3);
    printf("Array after middle insertion:\n");
    printArray(my_array, size); 
    printf("\n Inserting at END \n");
    insertElement(my_array, &size, 50, size + 1);
    printf("Array after end insertion:\n");
    printArray(my_array, size); 
    printf("\n--- Failed Insertion Example ---\n");
    insertElement(my_array, &size, 1000, 100); 
    return 0;
}