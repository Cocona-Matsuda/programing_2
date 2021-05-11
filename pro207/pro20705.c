#include <stdio.h>
#include <string.h>

int min3(int x, int y, int z){
    if (x > y){
        if (y > z){
            return z;
        }
        return y;
    }else if (x > z){
        return z;
    }
    return x;
}

int main (void){
    int x, y, z;
    int result;

    printf("整数１：");
    scanf("%d", &x);

    printf("整数２：");
    scanf("%d", &y);

    printf("整数３：");
    scanf("%d", &z);

    result = min3(x, y, z);

    printf("最も小さい値は%dです。\n", result);

    return 0;
}