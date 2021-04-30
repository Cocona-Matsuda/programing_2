#include <stdio.h>

int main (void){
    char s[100];
    int i;

    printf("文字列：");
    scanf("%s",s);

    i = 0;
    while (s[i] != '\0')
    {
        if(s[i] < '0' || s[i] > '9'){
            printf("%c",s[i]);
        }
        i++;
    }
    

    return 0;
}