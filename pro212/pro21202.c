#include <stdio.h>
#include <string.h>

int main (void){
    int x;
    int sum;

    sum = 0;

    do{
        printf("x:");
        scanf("%d", &x);
        sum += x;
    }while (x != 0);

    printf("合計：%d\n", sum);

    return 0;
}