#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *ifp;
    FILE *ofp;
    int x;

    if((ifp = fopen("p45data03.txt", "r")) == NULL){
        printf("ファイルのオープンに失敗しました。\n");
        exit(EXIT_FAILURE);
    }

    if((ofp == fopen("p45data04.txt", "w")) == NULL){
        printf("ファイルのオープンに失敗しました。\n");
        exit(EXIT_FAILURE);
    }

    fscanf(ifp, "%d", &x);
    fprintf(ofp, "%d", x);

    fclose(ifp);
    fclose(ofp);

    return 0;
}