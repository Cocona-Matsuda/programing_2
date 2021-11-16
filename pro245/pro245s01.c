#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    int year, month, day;
    char w[30];
    char FileName[64];

    printf("ファイル名:");
    scanf("%s", FileName);

    if((fp = fopen(FileName, "r")) == NULL){
        printf("ファイルオープンに失敗。\n");
        exit(EXIT_FAILURE);
    }

    fscanf(fp, "%d, %d, %d, %d, %s", &year, &month, &day, &w);

    printf("日付：%d年%d月%d日(%s)\n", year, month, day, w);

    fclose(fp);

    return 0;
}