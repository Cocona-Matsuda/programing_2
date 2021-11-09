#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    float pi;

    if((fp = fopen("pi.txt", "r")) == NULL){
        printf("ファイルのオープンに失敗しました。\n");
        exit(EXIT_FAILURE);
    }
    
    fscanf(fp, "%g", &pi);
    printf("%g\n",pi);

    fclose(fp);

    return 0;
}