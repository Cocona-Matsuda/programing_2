#include <stdio.h>
#include <string.h>

int goukei(int n){
    return (n * (n + 1) / 2);
}

int main (void){
    int n;
    int sum;

    printf("整数：");
    scanf("%d", &n);

    sum = goukei(n);

    printf("1から%dまでの合計値は%dです。\n", n, sum);

    return 0;
}