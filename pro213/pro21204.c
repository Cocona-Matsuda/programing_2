#include <stdio.h>
#include <string.h>

int main (void){
    int x, y, sum = 0;

    do{
        printf("x:");
        scanf("%d", &x);

        printf("y:");
        scanf("%d", &y);

        sum = x + y;

    } while (sum % 7 != 0);
    printf("入力終了");

    return 0;
}