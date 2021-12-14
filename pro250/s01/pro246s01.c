#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    if((fp = fopen("pro246s01.txt", "a")) == NULL){
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "今日は寒いですね。\n");
    fclose(fp);

    return 0;
}