#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    char buf[64];
    float x, sum = 0;
    
    if((fp = fopen("pro250s04.txt", "r")) == NULL)exit(1);
    

    fgets(buf, sizeof(buf), fp);

    while (sscanf(buf, "%g", &x) != EOF){
        sum += x;     
    }

    if((fp = fopen("pro250s04.txt", "a")) == NULL)exit(1);
    fprintf(fp, "ファイルの内容の合計:%g\n", sum);
    fclose(fp);

    return 0;
}