#include <stdio.h>
#include <string.h>

int main (void){
    char str1[100];
    char str2[100];

    printf("文字列１");
    scanf("%s",str1);

    printf("文字列２");
    scanf("%s",str2);

    if (strlen(Str1) < strlen(str2)){
        strcpy(str2,str1);
    }else if (strlen(str2) < strlen(str2)){
        strcpy(str1, str2);
    }else{
        printf("同じ長さ\n");
    }

    printf("文字列１：%s\n", str1);
    printf("文字列２：%s\n", str2);

    return 0;
}