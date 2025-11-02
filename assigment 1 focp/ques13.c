#include <stdio.h>

#define SIZE 7 
int find_peak_element(const int arr[], int size);
void print_array(const int arr[], int size) {
    printf("Input Array: {");
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i < size - 1) ? ", " : "");
    }
    printf("}\n");
}
int main() {
    int arr[SIZE] = {10, 20, 15, 90, 5, 80, 70};   
    printf("--- Peak Element Finder ---\n");
    print_array(arr, SIZE); 
    int peak_value = find_peak_element(arr, SIZE);
    
    if (peak_value != -1) {
        printf("\nResult: A peak element found is %d.\n", peak_value);
    } else {
        printf("\nResult: No peak element was found.\n");
    }
    
    return 0;
}
int find_peak_element(const int arr[], int size) {

    if (size == 0) return -1;
    if (size == 1) return arr[0]; 
    
    if (arr[0] >= arr[1]) {
        return arr[0];
    }
    for (int i = 1; i < size - 1; i++) {
       
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i]; 
        }
    }
    if (arr[size - 1] >= arr[size - 2]) {
        return arr[size - 1];
    }
    return -1;
}
