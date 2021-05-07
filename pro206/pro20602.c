#include <stdio.h>
#include<string.h>

int main (void){
    char str[10];
    char s2[] = "Masaki";

    printf("文字列：");
    scanf("%s",str);

    strncat(str, s2, 6);
    printf("%s",str);

    return 0;
}