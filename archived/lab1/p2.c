// author: Lu Yi
// date: 2025-08-27
// input: void
// output: int
// description: print different integer variable, take user input
#include <stdio.h>

int main(void) {
    int i = 0; // 0 is just a placeholder value

    printf("Enter an integer: ");
    scanf("%d", &i); //scanf(<"type of input">, <"the memory address, i.e. pointer, where scanf should put input value into">)

    printf("You integer was: %d\n", i);
    return 0;
}
