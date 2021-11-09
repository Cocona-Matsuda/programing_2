#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    int x;

    if((fp = fopen("indata.txt", "r")) == NULL){
        printf("ファイルが見つかりません！\n");
        exit(EXIT_FAILURE);
    }

    fscanf(fp, "%d", &x);
    printf("x = %d\n", x);

    fclose(fp);

    return 0;
}