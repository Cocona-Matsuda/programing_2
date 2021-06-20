#include <stdio.h>
#include <string.h>

int main (void){
    char s[5][10];
    int i;
    int j;

    for ( i = 0; i < 5; i++){
        printf("文字列%d：", i + 1);
        scanf("%s", s[i]);
    }

    printf("数字で始まる文字列\n");

    for ( i = 0; i < 5; i++){
        if (s[i][0] >= '0' && s[i][0] <= '9'){
            printf("文字列%d：%s\n", i + 1, s[i]);
        }
    }

    return 0;
}