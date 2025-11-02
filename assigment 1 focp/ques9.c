#include <stdio.h>
int find_first_occurrence(const int arr[], int size, int target);
int main() { 
    int scores[] = {85, 92, 99, 78, 100, 99, 65, 95};
    int size = sizeof(scores) / sizeof(scores[0]);
    int target_score = 99; 

    printf("Scores: {");
    for (int i = 0; i < size; i++) {
        printf("%d%s", scores[i], (i < size - 1) ? ", " : "");
    }
    printf("}\n\n");
    int index = find_first_occurrence(scores, size, target_score);
    if (index != -1) {
        
        printf("The score '%d' was found.\n", target_score);
        printf("First occurrence is at: **Index %d**\n", index);
        printf("This corresponds to the **%d%s** element in the array.\n", index + 1, 
               (index + 1 == 1) ? "st" : (index + 1 == 2) ? "nd" : (index + 1 == 3) ? "rd" : "th");
    } else {
       
        printf("Search failed. The score '%d' was not found in the array.\n", target_score);
    }
    return 0;
}

int find_first_occurrence(const int arr[], int size, int target) { 
    for (int i = 0; i < size; i++) { 
        if (arr[i] == target) { 
            return i;
        }
    }
    return -1;
}