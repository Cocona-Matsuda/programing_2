#include <stdio.h>
#include <string.h>

int main (void){
    int n;
    int i = 0;

    printf("整数：");
    scanf("%d", &n);

    do{
        printf("Hallo, world!\n");
        i++;
    } while (i < n);

    return 0;
}