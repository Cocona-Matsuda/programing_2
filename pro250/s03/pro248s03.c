#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    int x,sum;

    if((fp = fopen("pro248s03.txt", "r")) == NULL){
        printf("file io error!\n");
        exit(EXIT_FAILURE);
    }

    sum = 0;

    while (fscanf(fp, "%d", &x) != EOF){
        printf("データを1行読み込みます。\n");
        sum += x;
    }
    
    printf("ファイルの内容の合計:%d\n", sum);
    fclose(fp);

    return 0;
}