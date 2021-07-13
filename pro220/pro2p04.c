#include <stdio.h>
#include <string.h>

int nyuuryoku (void);

int main (void){
    int i;

    i = nyuuryoku();

    printf("i=%d\n", i);

    return 0;
}
int nyuuryoku(void){
    int x;

    printf("整数：");
    scanf("%d", &x);

    return x;
}