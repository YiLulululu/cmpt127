// author: Lu Yi
// date: 2025-08-27
// input: void
// output: int
// description: print non-100 values.
#include <stdio.h>

int main(void){
    for (int i=0; i<105; i++){
        if (i==100){
            continue;
        }
        printf("%d ", i++); // prints the value and THEN increments it
    }
}