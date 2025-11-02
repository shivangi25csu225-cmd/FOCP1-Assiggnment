#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 

int compareInts(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void findAndPrintDuplicates(int arr[], int size) {
    
    if (size <= 1) {
        printf("-1\n");
        return;
    }
    qsort(arr, size, sizeof(int), compareInts);

   
    bool found_duplicate = false;
    int last_printed_duplicate = arr[0] - 1; 

    printf("Output: ");

    
    for (int i = 0; i < size - 1; i++) {
       
        if (arr[i] == arr[i + 1]) {

            
            if (arr[i] != last_printed_duplicate) {
                printf("%d ", arr[i]);
                last_printed_duplicate = arr[i]; 
                found_duplicate = true;
            }
        }
    }

    
    if (!found_duplicate) {
        
        printf("-1");
    }
    printf("\n");
}

int main() {
    
    int arr1[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Input 1: {2, 10, 10, 100, 2, 10, 11, 2, 11, 2}\n");
    findAndPrintDuplicates(arr1, size1); 

    
    int arr2[] = {5, 40, 1, 40, 100000, 1, 5, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("\nInput 2: {5, 40, 1, 40, 100000, 1, 5, 1}\n");
    findAndPrintDuplicates(arr2, size2); 
    int arr3[] = {1, 3, 5, 7, 9};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("\nInput 3: {1, 3, 5, 7, 9}\n");
    findAndPrintDuplicates(arr3, size3); 
    int arr4[] = {100};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);

    printf("\nInput 4: {100}\n");
    findAndPrintDuplicates(arr4, size4); 
    
    return 0;
}