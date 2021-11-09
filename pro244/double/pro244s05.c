#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    float x, y;

    if((fp = fopen("double.txt", "r")) == NULL){
        printf("ファイルのオープンに失敗しました。\n");
        exit(EXIT_FAILURE);
    }

    fscanf(fp, "%g %g", &x, &y);
    printf("%g\n%g\n", x, y);

    fclose(fp);
    
    return 0;
}