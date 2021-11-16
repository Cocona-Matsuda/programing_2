#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    int x, sum = 0, n = 0, max, min;

    if((fp = fopen("p45data02.txt", "r")) == NULL){
        printf("ファイルのオープンに失敗しました。\n");
        exit(EXIT_FAILURE);
    }

    max = x;
    min = x;
    while (fscanf(fp, "%d", &x) != EOF){
        sum += x;

        if(max < x){
            max = x;
        }

        if(min > x){
            min = x;
        }

        n++;
    }

    fclose(fp);

    if((fp = fopen("p45data05.txt", "w")) == NULL){
        printf("ファイルのオープンに失敗しました。\n");
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "合計：%d点\n", sum);
    fprintf(fp, "平均：%d点\n", sum / n);
    fprintf(fp, "最高点：%d点\n", max);
    fprintf(fp, "最低点：%d点\n", min);

    fclose(fp);    

    return 0;
}