#include <stdio.h>
#include <string.h>

int main (void){
    float y;
    float *p;

    p = &y;
    *p = 3.14;

    printf("y   :  %d\n", y);

    return 0;
}