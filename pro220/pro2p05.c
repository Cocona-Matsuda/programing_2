#include <stdio.h>
#include <string.h>

void nibai(int i);

int main (void){
    int i;

    i = 100;

    nibai(i);
    printf("i=%d\n", i);

    return 0;
}
void nibai(int i){
    i *= 2;
}