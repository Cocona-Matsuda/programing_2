#include <stdio.h>

int main (void){
    double pi = 3.14;
    int r = 2;

    printf("piの値");
    scanf("%d",&pi);

    printf("半径の値");
    scanf("%d",r);

    printf("%g",r * r * pi);

    return 0;
}