#include <stdio.h>
int max(int a, int b){
    //return the larger one of the two elements
    int larger = a;
    if (b>a){
        larger = b;
    }
    return larger;
}

int min(int a, int b){
    //return the smaller one of the two elements
    int smaller = a;
    if (b<a){
        smaller = b;
    }
    return smaller;
}