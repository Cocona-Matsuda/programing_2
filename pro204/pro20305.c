#include <stdio.h>

int main (void){
    char s[100];
    int n1[100];
    int n2;
    int i;

    printf("文字列：");
    scanf("%s",s);

    i = 0;
    n2 = 0;

    while (s[i] != '\0'){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            n1[i] = s[i];
        }
        i++;
    }
    printf("大文字は%d文字\n",n1);

    return 0;
}