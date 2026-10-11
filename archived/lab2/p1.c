// author: Lu Yi
// date: 2025-08-27
// input: void
// output: int
// description: take user input and find max and min

#include <stdio.h>
#include "p1funcs.h"

int main(void){
    int a;
    int b;

    printf("Enter two integers seperated by space:\n");
    scanf("%d %d", &a, &b);
    printf("The max of the integers is %d\n", max(a,b));
    printf("The min of the integers is %d\n", min(a,b));

    return(0);
}