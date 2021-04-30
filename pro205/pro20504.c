#include <stdio.h>
#include <string.h>

int main (void){
    char str1[100];
    char str2[100];

    printf("文字列：");
    scanf("%s",str1);

    strcpy(str2, str1);
    printf("文字列２：%s", str2);

    return 0;
}