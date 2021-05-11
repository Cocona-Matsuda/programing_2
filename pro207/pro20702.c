#include <stdio.h>
#include <string.h>

int add(int x, int y){
    int r;
    r = x + y;
    return r;
}

int main (void){
    int x;
    int y;
    int result;

    printf("整数１：");
    scanf("%d", &x);

    printf("整数２：");
    scanf("%d", &y);

    result = add(x, y);

    printf("合計値は%dです。\n", result);

    return 0;
}