#include <stdio.h>
#include <string.h>

int main (void){
    char num, and = 0x80;

    printf("整数：");
    scanf("%d", &num);

    if (num & and == 0){
        printf("正の数です。\n");
    }else{
        printf("負の数です。\n");
    }

    return 0;
}