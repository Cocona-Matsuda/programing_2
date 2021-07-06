#include <stdio.h>
#include <string.h>

int main (void){
    int x[3];
    int *p0;
    int *p1;
    int *p2;

    p0 = &x[0];
    p1 = &x[1];
    p2 = &x[2];

    *p0 = 100;
    *p1 = 200;
    *p2 = 300;

    printf("x[0] = %d\n", x[0]);
    printf("x[1] = %d\n", x[1]);
    printf("x[2] = %d\n", x[2]);

    return 0;
}