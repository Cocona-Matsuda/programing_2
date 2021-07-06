#include <stdio.h>
#include <string.h>

int main (void){
    int x;
    int *p;

    p = &x;

    printf("x:");
    scanf("%d", p);

    printf("xの値は%dです\n", x);

    return 0;
}