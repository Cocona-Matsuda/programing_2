#include <stdio.h>
#include <string.h>

int main (void){
    char s1[100];
    char s2[100] = "<<<";

    printf("文字列：");
    scanf("%s",s1);

    strcat(s2, s1);
    strcat(s2, ">>>");

    printf("%s\n",s2);

    return 0;
}