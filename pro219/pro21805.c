#include <stdio.h>
#include <string.h>

int main (void){
    int x[3];

    printf("x[0]のアドレス：%p\n", &x[0]);
    printf("x[2]のアドレス：%p\n", &x[2]);

    return 0;
}