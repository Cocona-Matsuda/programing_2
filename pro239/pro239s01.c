#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int x;

    x = 10;

    int *p;

    p =(int *)malloc(sizeof(int));
    if (p == NULL){
        exit(EXIT_FAILURE);
    }
    *p = 10;

    printf("*p = %d\n", *p);

    return 0;
}