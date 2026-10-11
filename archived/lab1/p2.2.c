// author: Lu Yi
// date: 2025-08-27
// input: void
// output: int
// description: print float variables in different forms and print their memory address

#include <stdio.h>

int main(void) {
    // Declare variables
    float i = 0.0; 
    float j = 1.0;
    float k = 2.0;

    // Take user input for i
    printf("give me an number : \n");
    scanf("%f", &i);

    // Print values of the variables and their pointers
    printf("the value of i is %.2f, its pointer points to %p\n", i, &i);
    printf("the value of j is %.2f, its pointer points to %p\n", j, &j);
    printf("the value of k is %.2f, its pointer points to %p\n", k, &k);

    return 0;
}
