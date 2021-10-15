#include <stdio.h>
#include <string.h>

int main (void){
    int i = 0, num = 0, sum = 0;  //フラグ
    float ave;

    while (1){
        printf("整数：");
        scanf("%d", &num);
        if (num == -1){
            break;
        }
        sum += num;
        i++;
    };

    ave = (float) sum / i;
    printf("平均値は%gです。\n", ave);

    return 0;
}