#include <stdio.h>
#include <string.h>

int main(void){
    char str1[100];
    char str2[100];
    char tmp[100];

    printf("文字列１：");
    scanf("%s", str1);

    printf("文字列２：");
    scanf("%s", str2);

    strcpy(tmp,str1);
    strcpy(str1, str2);
    strcpy(str2, tmp);

    printf("文字列１：%s",str1);
    printf("文字列２：%s", str2);
}