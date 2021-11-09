#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;   //FILE型

/*
    fp = fopen("indata.txt", "r");
    if(fp == NULL){
        printf("ファイルが見つかりません！\n");
        exit(EXIT_FAILURE);
    }
*/

    if((fp = fopen("indata.txt", "r") == NULL)){
        printf("ファイルが見つかりません\n");
        exit("EXIT_FAILURE");
    }

    printf("ファイルのオープンに成功！\n");
    fclose(fp);

    return 0;
}