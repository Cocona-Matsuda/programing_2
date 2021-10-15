#include <stdio.h>
#include <string.h>

int main (void){
    int num1, num2;
    float ave;  //平均値

    // 入力
    printf("整数１：");
    scanf("%d", &num1);
    printf("整数２：");
    scanf("%d", &num2);

    ave = ( (float)num1 + (float)num2 ) / 2;
    printf("平均値は%gです\n", ave);

    return 0;
}