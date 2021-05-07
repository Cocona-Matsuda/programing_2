#include <stdio.h>
#include <string.h>

int main (void){
    char str1[100];
    char str2[100];

    printf("文字列１：");
    scanf("%s",str1);

    printf("文字列２：");
    scanf("%s",str2);

    strcat(str1,str2);

    printf("文字列１：%s\n",str1);

    return 0;
}