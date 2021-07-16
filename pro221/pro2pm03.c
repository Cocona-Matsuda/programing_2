#include <stdio.h>
#include <string.h>

int main (void){
    int a[3];
    int i;

    for ( i = 0; i < 3; i++){
        printf("a[%d]のアドレス: %p\n", i, &a[i]);
    }

    return 0;
}