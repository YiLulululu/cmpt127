// author: Lu Yi
// date: 2025-08-27
// input: void
// output: int 
// description: 

#include <stdio.h>
#include "p2identical.h"

int main(void){
    int arr1[] = {1,1};
    int arr2[] = {1,2};
    unsigned int len = 2;

    if (identical(arr1, arr2, len)){
        printf("Arrays are identical.\n");
    } else {
        printf("Arrays are not identical.\n");
    }

    return 0;
}