#include <stdio.h>
#include <string.h>

int input_int2(int max);

int main (void){
    int i;

    i = input_int2(10);
    printf("入力したのは%dです", i);

    return 0;
}

int input_int2(int max){
    int n = max + 1;

    while (n > max){
        printf("%d以下の整数：", max);
        scanf("%d", &n);
    }
    return n;
}