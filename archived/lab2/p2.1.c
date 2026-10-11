// author: Lu Yi
// date: 2025-08-27
// input: void
// output: int
// description: Array practice, pass by pointer

#include <stdio.h>

void reverse(int arr[], unsigned int len){
    for(int i=0, j=len-1; i<len/2; i++, j--){
        int temp =0;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(void){
    int i_array[] = {11, 12, 13}; //initialize i_array
    unsigned int len =3;

    reverse(i_array, len); //copy the pointer, modify the same i_array

    for(unsigned int i=0; i<len; i++){
        printf("%d ", i_array[i]);
    }
    printf("\n");

    return 0;
}