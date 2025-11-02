#include <stdio.h>
#define ARRAY_SIZE 10 
void print_array(const char *name, const int arr[], int size) {
    printf("%s [Size %d]: {", name, size);
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i < size - 1) ? ", " : "");
    }
    printf("}\n");
}
int main() {
     int scores[ARRAY_SIZE] = {12, 5, 20, 7, 34, 1, 9, 50, 6, 17};
    int even_array[ARRAY_SIZE];
    int odd_array[ARRAY_SIZE];  
    int even_count = 0;
    int odd_count = 0;
    
    printf("--- Array Segregation by Parity (Even/Odd) ---\n");
    print_array("Original Scores", scores, ARRAY_SIZE); 
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int current_score = scores[i];    
        if (current_score % 2 == 0) {         
            even_array[even_count] = current_score;
            even_count++; 
        } else {
            
            odd_array[odd_count] = current_score;
            odd_count++; 
    }
} 
    printf("\n--- Results ---\n");
    print_array("Even Scores Array", even_array, even_count);
    print_array("Odd Scores Array", odd_array, odd_count);
    
    return 0;
}
