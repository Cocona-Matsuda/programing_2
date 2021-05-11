#include <stdio.h>
#include <string.h>

int nibai(int x){
    int result;

    result = x * 2;

    return result;
}

int main (void){
    int x;
    int result;

    printf("整数：");
    scanf("%d", &x);

    result = nibai(x);

    printf("２倍の数は%dです。\n", result);

    return 0;
}