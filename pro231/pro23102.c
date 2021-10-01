#include <stdio.h>
#include <string.h>

int main (void){
    double m[3];
    double *p;

    p = m;
    printf("m[0]   : %p\n", p);
    printf("m[1]   : %p\n", p+1);
    printf("m[1]   : %p\n", &p[1]);
    printf("m[2]   : %p\n", p+2);

    return 0;
}