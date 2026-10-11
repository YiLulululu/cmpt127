#include <stdio.h>

int identical(int arr1[], int arr2[], unsigned int len){
    // identical returns 1 iff arrays arr1 and arr2 contain the same values in the sam order, or 0 otherwise
    // if len is 0, the arrays are considered identical

    int same = 1;
    for (unsigned int i=0; i<len; i++){
        if (arr1[i] != arr2[i])
        {
            same =0;
            break;
        }
        
    }
    return same;
}

int scrambled(int arr1[], int arr2[], unsigned int len)
{
    int same = 1;
    int arr[101] = {0};
    for (unsigned int i=0; i<len; i++){
        int found = 0;
        for (unsigned int j=0; j<len; j++){
            
            if (arr1[i] == arr2[j]&arr[j] != 1){
                arr[j] = 1;
                found = 1;
                break;
            }
        }
        printf("in loop %d, found is %d\n ", i, found);
        if (!found){
            same =0;
            break;
        }
    }
    
    return same;
}