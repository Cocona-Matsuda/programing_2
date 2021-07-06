#include <stdio.h>
#include <string.h>

int main (void){
    int x, y;
    int *p;

    printf("x=");
    scanf("%d", &x);

    p = &y;
    *p = x;

    printf("y = %d\n", y);

    return 0;
}