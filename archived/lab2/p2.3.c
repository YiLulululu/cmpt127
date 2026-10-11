// author: Lu Yi
// date: 2025-08-27
// input: void
// output: 
// description: 

#include <stdio.h>
#include "p2identical.h"

int main(void){
    int arr1[] = {1,2,2,4,5};
    int arr2[] = {5,4,3,2,1};
    unsigned int len = 5;

    if (scrambled(arr1, arr2, len)){
        printf("Arrays are identical.\n");
    } else {
        printf("Arrays are not identical.\n");
    }

    return 0;
}