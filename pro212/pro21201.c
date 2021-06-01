#include <stdio.h>
#include <string.h>

int main (void){
    int x = 1, sum = 0;

    while (x != 0)
    {
        printf("x:");
        scanf("%d", &x);
        sum += x;
    }
    printf("合計：%d\n", sum);

    return 0;
}