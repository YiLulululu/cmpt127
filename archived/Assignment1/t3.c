// author: Lu Yi
// date: 2025-08-27
// input: void
// output: int
// description: Read any number of floating point values from standard input, seperated by a new line, and stop upon the user entering 0 (the program should discard the 0 and not use it in the output). If no floating point value can be parsed (i.e. a blank line was read) there should be no output. After the user finishes inputting values, t3.c will print the product of all the inputs. The printed output should only have 2 decimal places.

#include <stdio.h>

int main(void){
    float num = 1.0;
    float product = 1.0;
    int count = 0;

    printf("Enter floating point values seperated by a new line (0 to stop):\n");
    
    while (scanf("%f", &num)==1){
        if (num == 0.0){
            break;
        }
        product *= num;
        count++;
    }
    
    if (count >0){
        printf("Product of all input: %.2f\n", product);
    }
    return(0);

}