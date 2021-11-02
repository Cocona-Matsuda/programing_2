#include <stdio.h>
#include <string.h>

int main (void){
    int num[3];
    int *p;

    // pにmの先頭アドレスを代入
    p = m;

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    printf("m[0]: %d\n", m[0]);
    printf("m[1]: %d\n", m[1]);
    printf("m[2]: %d\n", m[2]);

    return 0;
}