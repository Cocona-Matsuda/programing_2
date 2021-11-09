#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    char hello[50];

    if((fp = fopen("Hello.txt", "r")) == NULL){
        printf("ファイルのオープンに失敗しました。\n");
        exit(EXIT_FAILURE);
    }

    fscanf(fp, "%s", hello);
    printf("%s\n", hello);

    fclose(fp);

    return 0;
}