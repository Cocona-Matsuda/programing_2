#include <stdio.h>
#include <string.h>

void nyuuryoku(int *x);

int main (void){
    int i;

    nyuuryoku(&i);
    printf("i=%d\n", i);

    return 0;
}
void nyuuryoku(int *x){
    printf("整数：");
    scanf("%d", x);
}