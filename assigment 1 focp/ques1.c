#include <stdio.h>
#include <math.h> 

int main() {
    int original_num ;
    int temp_num ;
    int count = 0; 
    int sum = 0;   
 
    while (temp_num != 0) {
        temp_num /= 10;
        count++;
    } 
    temp_num = original_num;  
    while (temp_num != 0) {
        int remainder = temp_num % 10; 
        sum += (int)pow(remainder, count); 

        temp_num /= 10; 
    }

    if (sum == original_num) {
        printf("%d is an armstrong number.\n", original_num);
    } else {
        printf("%d is not an armstrong number. )\n", original_num );
    } 
    return 0;
}



   