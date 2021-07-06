#include <stdio.h>
#include <string.h>

int main (void){
    int x;
    int *p;

    printf("X:");
    scanf("%d", &x);

    p = &x;

    x = *p * 2;

    printf("x * 2 : %d\n", x);
    return 0;
}