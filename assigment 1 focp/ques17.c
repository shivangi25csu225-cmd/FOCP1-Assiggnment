#include <stdio.h>
#define MAX_SIZE 10 
void print_array(const int arr[], int current_size) {
    if (current_size <= 0) {
        printf("{}\n");
        return;
    }
    printf("{");
    for (int i = 0; i < current_size; i++) {
        printf("%d%s", arr[i], (i < current_size - 1) ? ", " : "");
    }
    printf("}\n");
}
int delete_element(int arr[], int *current_size, int index_to_delete) {
    if (index_to_delete < 0 || index_to_delete >= *current_size) {
        printf("Error: Invalid index (%d) for deletion.\n", index_to_delete);
        return 0; 
    }
    for (int i = index_to_delete; i < *current_size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*current_size)--; 
    return 1; 
}
int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50, 60};
    int current_size = 6;
    printf("--- Array Deletion Program ---\n");
    int delete_index_front = 0;
    
    printf("\n[Case 1: Deleting from Front (Index %d)]\n", delete_index_front);
    printf("Array Before Deletion: ");
    print_array(arr, current_size);
    
    if (delete_element(arr, &current_size, delete_index_front)) {
        printf("Element Deleted.\n");
        printf("Array After Deletion:  ");
        print_array(arr, current_size);
    }
    int delete_index_middle = 2; 
    
    printf("\n[Case 2: Deleting from Middle (Index %d)]\n", delete_index_middle);
    printf("Array Before Deletion: ");
    print_array(arr, current_size);

    if (delete_element(arr, &current_size, delete_index_middle)) {
        printf("Element Deleted.\n");
        printf("Array After Deletion:  ");
        print_array(arr, current_size);
    }
    int delete_index_end = current_size - 1; 
    printf("\n[Case 3: Deleting from End (Index %d)]\n", delete_index_end);
    printf("Array Before Deletion: ");
    print_array(arr, current_size);

    if (delete_element(arr, &current_size, delete_index_end)) {
        printf("Element Deleted.\n");
        printf("Array After Deletion:  ");
        print_array(arr, current_size);
    }
    
    return 0;
}
