#include <stdio.h>
#include <string.h>

int main (void){
    char s[10];
    int i;

    printf("文字列：");
    scanf("%s", s);

    i = 0;
    printf("文字コード：%x ", s[i]);

    do{
        i++;
        printf("%x", s[i]);
    } while (s[i] != '\0');


    return 0;
}