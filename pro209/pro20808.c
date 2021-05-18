#include <stdio.h>
#include <string.h>

int input_int2(int max);
void star(int n);

int main (void){
    int i;

    i = input_int2(10);
    star(i);

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

void star(int n){
    int i;

    for ( i = 0; i < n; i++){
        printf("*");
    }
}