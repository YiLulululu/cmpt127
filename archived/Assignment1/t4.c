// author: Lu Yi
// date: 2025-08-27
// input: void
// output: print triangle
// description: Read a user input line containing a positive integer value. This integer will be the width and height of a reversed right triangle. Draw the outline of the right trangle # character and fill the triangle using the . character

# include <stdio.h>

int main(void){
    int size = 0;
    printf("Enter a positive integer:\n");
    scanf("%d", &size);

    for(int i=1; i<size; i++){
        for(int j=1; j<=size; j++){
            if (j==size|j==size - i +1){
                printf("#");
            }else if(j<=size-i){
                printf(" ");
            }else{
                printf(".");
            }    
        }
        printf("\n");
    }
    for (int i=1; i<=size; i++){
        printf("#");
    }
    printf("\n");
    return(0);
}

