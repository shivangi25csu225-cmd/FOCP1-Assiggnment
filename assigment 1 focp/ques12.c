#include <stdio.h>
#define SIZE 8 
void print_array(const int arr[], int size) {
    printf("Scores Array: {");
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i < size - 1) ? ", " : "");
    }
    printf("}\n");
}

int main() {
    int scores[SIZE] = {45, 92, 12, 78, 99, 55, 10, 88};
    int max_score = scores[0]; 
    int min_score = scores[0]; 
    int max_index = 0;
    int min_index = 0;

    printf("--- Maximum and Minimum Score Analysis ---\n");
    print_array(scores, SIZE);
    for (int i = 1; i < SIZE; i++) {
        int current_score = scores[i];  
       
        if (current_score > max_score) {
            max_score = current_score;
            max_index = i;
        }
        if (current_score < min_score) {
            min_score = current_score;
            min_index = i;
        }
    } 
    printf("Maximum Score : %d and Found at Index %d\n", max_score, max_index);
    printf("Minimum Score : %d and Found at Index %d\n", min_score, min_index);
    
    return 0;
}
