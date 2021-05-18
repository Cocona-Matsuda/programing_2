#include <stdio.h>
#include <string.h>

int add(int x, int y){
    int diff, ave, result;

    diff = (x * (x - 1) / 2);
    ave = (y * (y + 1) / 2);

    result = ave - diff;

    return result;
}

int main (void){
    int num1, num2, result;

    printf("整数１：");
    scanf("%d", &num1);

    printf("整数２：");
    scanf("%d", &num2);

    result = add(num1, num2);

    printf("合計値は%dです。\n", result);

    return 0;
}