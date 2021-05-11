#include <stdio.h>
#include <string.h>

int min(int x, int y){
    if (x < y){
        return x;
    }else{
        return y;
    }
    return 0;
}

int main (void){
    int x, y;
    int result;

    printf("整数１：");
    scanf("%d",&x);

    printf("整数２：");
    scanf("%d",&y);

    result = min(x, y);

    printf("小さいほうの値は%dです。\n", result);

    return 0;
}