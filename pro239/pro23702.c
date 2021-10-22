#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int n;
    char *p;

    printf("文字列の長さ：");
    scanf("%d", &n);

    // 動的確保
    p = (char *)mamlloc(sizeof(char) * n);
    if (p == NULL){
        printf("動的確保に失敗\n");
        exit(EXIT_FAILURE);
    }
    printf("文字列：");
    scanf("%s", p);

    printf("文字列: %s\n",p);

    return 0;
}