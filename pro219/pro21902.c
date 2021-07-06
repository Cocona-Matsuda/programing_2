#include <stdio.h>
#include <string.h>

int main (void){
    int x, y;
    int *px;
    int *py;
    int tmp;

    printf("x:");
    scanf("%d", &x);
    printf("y:");
    scanf("%d", &y);

    px = &x;
    py = &y;

    tmp = *px;
    *px = *py;
    *py = tmp;

    printf("x : %d\n", x);
    printf("y : %d\n", y);

    return 0;
}