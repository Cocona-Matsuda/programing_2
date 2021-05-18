#include <stdio.h>
#include <string.h>

int abs(int x){
    int y;

    if (x < 0){
        y = -1 * x;
    }else{
        y = x;
    }

    return (y);
}

int main (void){
    int n;

    printf("整数：");
    scanf("%d", &n);

    n = abs(n);

    printf("絶対値は%dです。",n);

    return 0;
}