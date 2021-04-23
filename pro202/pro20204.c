#include <stdio.h>

int main (void){
    char str[20];

    printf("文字列：");
    scanf("%s", str);

    str[0] = '\0';

    printf("空文字列にしました。\n");

    printf("文字列：%s\n", str);

    return 0;
}