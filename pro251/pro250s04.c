#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    int x;
    int n = 0;
    int sum = 0;

    if((fp = fopen("pro250s07.txt", "r")) == NULL){
        exit(EXIT_FAILURE);
    }

    while (fscanf(fp, "%d", &x) != EOF){
        sum += x;
        n++;
    }

    fclose(fp);

    fp = fopen("pro250s07.txt", "a");
    fprintf(fp, "合計：%d   平均：%.2f\n", sum, (f))

    fclose(fp);
    

    return 0;
}