// author: Lu Yi
// date: 2025-08-27
// input: void
// output: int
// description: scan f two integer values from standard input seperated by a space, printf the sum of these two integers

#include <stdio.h>

int main(void){
    int a = 0;
    int b = 0;

    printf("Enter two integers seperated by a space:");
    scanf("%d %d", &a, &b);

    printf("The sum is: %d\n", a+b);

    return(0);
}