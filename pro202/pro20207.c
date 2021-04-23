#include <stdio.h>

int main (void){
    char str[100];
    char c;
    int i = 0;
    int n = 0;

    printf("文字：");
    scanf("%c", &c);

    printf("文字列:");
    scanf("%s", str);


    while (str[i] != '\0'){
        if (str[i] == c){
            n++;
        }
        i++;
    }
    printf("%d\n", n);

    return 0;
}