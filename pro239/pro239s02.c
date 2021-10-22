#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    // int x;
    int *p;

    p = (int *)malloc(sizeof(int));
    if (p == NULL)
    {
        exit(EXIT_FAILURE);
    }

    printf("x >>");
    scanf("%d", &p);
    printf("x = %d\n", ++(*p));

    return 0;
}