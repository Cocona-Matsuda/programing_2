#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    char FileName[30];
    int x, sum = 0;

    printf("ファイル名：");
    scanf("%s", FileName);

    if((fp = fopen(FileName, "r")) == NULL){
        printf("ファイルオープンに失敗しました。\n");
        exit(EXIT_FAILURE);        
    }

    while (fscanf(fp, "%d", &x) != EOF){
        sum += x;
    }
    
    printf("合計値:%d\n", sum);

    fclose(fp);

    return 0;
}