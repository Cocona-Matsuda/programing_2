#include<stdio.h>
#include<stdlib.h>

int main(void){
    int *p;

    p= (int *)malloc(sizeof(int));
    if(p == NULL){
        exit(EXIT_FAILURE);
    }

    *p = 10;

    printf("%d\n", *p);
    free(p);
    
    return 0;
}