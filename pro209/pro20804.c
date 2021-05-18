#include <stdio.h>
#include <string.h>

int input_int (void){
    int a;

    printf("整数：");
    scanf("%d", &a);

    return a;
}

int main (void){
    int i;

    i = input_int();

    printf("%d\n", i);

    return 0;
}