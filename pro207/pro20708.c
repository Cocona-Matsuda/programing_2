#include <stdio.h>
#include <string.h>

float heikin(int x, int y, int z){
    float sum;

    sum = x + y + z;

    return (sum / 3);
}

int main (void){
    int x, y, z;
    float ave;

    printf("整数１：");
    scanf("%d", &x);

    printf("整数２：");
    scanf("%d", &y);

    printf("整数３：");
    scanf("%d", &z);

    ave = heikin(x, y, z);

    printf("平均値は%.2fです。\n", ave);

    return 0;
}