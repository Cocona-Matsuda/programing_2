#include <stdio.h>
#include <string.h>

void nibai(int *p);

int main (void){
    int x;

    printf("x:");
    scanf("%d", &x);

    nibai(&x);

    printf("x*2: %d", x);

    return 0;
}
void nibai(int *p){
    *p *= 2;
}