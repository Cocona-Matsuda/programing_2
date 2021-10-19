#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int *str;
    char *string[];

    str = (int *)malloc(sizeof(int));

    if (str == NULL){
        printf("確保に失敗しました。\n");
    }else{
      printf("文字列の長さ：");
      scanf("%d", &str);
    }

    string[str] = (int *)malloc(sizeof(str));

    if (string == NULL){
        printf("確保に失敗しました。\n");
    }else{
      printf("文字列：");
      scanf("%s", &string);
    }

    printf("文字列：%s",string);
    free(str);
    free(string);
    return 0;
}