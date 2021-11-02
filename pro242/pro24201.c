#include <stdio.h>
#include <string.h>

int main (void){
    float *p;
    float x;
    
    p = &x;
    *p = 3.14;
    printf("%g", x);

    return 0;
}