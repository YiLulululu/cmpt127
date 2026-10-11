// author: Lu Yi
// date: 2025-08-27
// input: void
// output: int
// description: Array practice, pass pointers/arrays to functions 

//There are 3 things that define an array:
// 1. Type: all elements must be of the same type
// 2. Variable Name == Pointer, address indicating where in memory the array's first element is stored
// 3. Elements: the actual values stored in the array

#include <stdio.h>
#include <stdlib.h>

int array_max_brackets(int arr[], unsigned int len){
    //'[]' means we're dealing with an array
    // arr[] is an unsized array
    int max = arr[0];
    for (unsigned int i=1; i<len; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int array_max_ptr(int* arr, unsigned int len) {
    //* says: "this argument is a pointer"
    //functions take in "values" by defaults, *<pointer> = value
    int max = arr[0];
    for (unsigned int i=1; i<len; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

const unsigned int sz = 10; //adding 'const make the variable read-only

int main(void){
    int arr[sz];

    for (unsigned int i=0; i<sz; i++){
        arr[i] = random();
        printf("arr[%u]=%d\n", i, arr[i]);
    }

    printf("Largest was \n %d\n %d\n",
    array_max_brackets(arr, sz),
    array_max_ptr(arr, sz));    

    return 0;
}

