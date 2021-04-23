#include <stdio.h>

int main (void){
    char str[100];
    char c;
    int i = 0;

    printf("文字：");
    scanf("%c", &c);

    printf("文字列:");
    scanf("%s", str);


    while ((str[i] != c) && (str[i] != '\0')){
        i++;
    }

    if (str[i] == '\0'){
        printf("-1\n");
    }else{
        printf("%d\n", i);
    }

    return 0;
}