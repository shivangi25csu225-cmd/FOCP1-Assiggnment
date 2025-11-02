#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 10
#define TARGET_SCORE 99

int main() {
     const char *student_names[NUM_STUDENTS] = {
        "Alice", "Bob", "Charlie", "David", "Eve", 
        "Frank", "Grace", "Henry", "Ivy", "Jack"
    };
    int student_marks[NUM_STUDENTS] = {
        90, 99, 85, 99, 100, 
        75, 99, 92, 99, 90
    };
    int count_99 = 0;
    
    printf("--- Student Marks Analysis ---\n");
    printf("Searching for students who scored: %d\n\n", TARGET_SCORE);
    
    printf("Students who scored %d:\n", TARGET_SCORE);
 
    for (int i = 0; i < NUM_STUDENTS; i++) {       
        if (student_marks[i] == TARGET_SCORE) { 
            printf("-> %s\n", student_names[i]);
            count_99++;
        }
    }
    if (count_99 > 0) {
        printf("Summary: **%d** student(s) scored %d.\n", count_99, TARGET_SCORE);
    } else {
        printf("No students scored %d.\n", TARGET_SCORE);
    }
    return 0;
}