#include <stdio.h>
#include <string.h>

int main (void){
    int kg, cm; //体重・身長
    float bmi;

    // 入力
    printf("体重：");
    scanf("%d",&kg);
    printf("身長：");
    scanf("%d", &cm);

    bmi = kg / ( (float)(cm) / 100 * (float)(cm) / 100 );

    printf("貴方のBMI値は %gです\n", bmi);

    return 0;
}