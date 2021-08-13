#include <stdio.h>
#include <string.h>

int main (void){
    int x;
    int *p;

    p = &x;
    *p = 10;

    printf("xのアドレス: %p\n", p);
    printf("xのサイズ：%d\n", sizeof(x));
    printf("xの値 : %d\n", x);

    return 0;
}