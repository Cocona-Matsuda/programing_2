#include <stdio.h>
#include <string.h>

int db (int x){
    int d;

    d = 2 * x;

    return d;
}

int main (void){
    int n;
    int result;

    printf("整数：");
    scanf("%d", &n);

    result = db(n);

    printf("２倍にした値は%dです\n", result);

    return 0;
}