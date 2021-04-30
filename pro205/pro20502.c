#include <stdio.h>
#include <string.h>

int main (void){
    char str1[100];
    char str2[100];
    int n1, n2;

    printf("文字列１：");
    scanf("%s",str1);

    printf("文字列２：");
    scanf("%s",str2);

    if (strlen(str1) < strlen(str2)){
        printf("文字列２の方が長い");
    }else{
        printf("文字列１の方が長い");
    }

    return 0;
}