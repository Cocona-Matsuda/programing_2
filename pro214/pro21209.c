#include <stdio.h>
#include <string.h>

int main (void){
    int n;
    int i;

    printf("整数：");
    scanf("%d", &n);

    i = 0;
    do{
        i++;
        n /= 10;
    } while (n > 0);

    printf("桁数=%d\n", i);

    return 0;
}