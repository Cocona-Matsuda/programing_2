#include <stdio.h>
#include<string.h>

int main (void){
    char str1[100];
    char str2[100];
    int i;

    printf("文字列１：");
    scanf("%s",str1);

    strcpy(str2,str1);

    for ( i = 0; i < 9; i++){
        strcat(str2,str1);
    }

    printf("%s",str2);

    return 0;
}