#include <stdio.h>

int main (void){
    char str1[20];
    char str2[20];

    printf("文字列１:");
    scanf("%s", str1);

    printf("文字列２:");
    scanf("%s", str2);

    printf("%s%s\n",str1, str2);

    return 0;
}