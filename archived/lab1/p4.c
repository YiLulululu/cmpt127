// author: Lu Yi
// date: 2025-08-27
// input: void
// output: int
// description: Take user input of arbitrary length of integers, seperate by spaces. Print coressponding number of # in one line to represent each integer.

#include <stdio.h>

int main(void){
    // initialize while loop variable
    int j = 0;

    // prompt for user input
    printf("Enter integers separated by spaces:");
    
    // while the user does not end i.e. ctrl-d; print loop variable
    while (scanf("%d", &j) == 1) {
        for (int i=0; i<j; i++){
            printf("#");
        }
        printf("\n");
    }
    return 0;

}

