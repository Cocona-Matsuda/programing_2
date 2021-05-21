#include <stdio.h>
#include <string.h>

int goukei(int i);

int main (void){
    int i;

    printf("整数値：");
    scanf("%d", &i);

    printf("１から%dまでの合計値：%d\n", i, goukei(i));

    return 0;
}

int goukei(int i){
    int result;

    if (i == 1){
        return 1;
    }

    result = goukei(i - 1) + i;

    return result;
}