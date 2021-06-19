#include <stdio.h>
#include <string.h>

int main (void){
    char s[10];
    int n, i;

    printf("文字列：");
    scanf("%s", s);

    n = 0;
    i = 0;

    do{
        if (s[i] >= '0' && s[i] <= '9'){
            n++;
        }
        i++;
    } while (s[i] != '\0');

    printf("数字の数は%d個です．\n", n);

    return 0;
}