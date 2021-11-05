#include<stdio.h>

int main(void){
    float *p;
    float x;

    p = &x;

    *p = 3.14;

    printf("%g\n", x);
}