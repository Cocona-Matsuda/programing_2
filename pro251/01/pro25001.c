#include<stdio.h>
#include<stdlib.h>

struct s{
    int score;
    char name[30];
}

int main(void){
    FILE *fp;
    struct s m[5];
    int sum = 0, u;
    char buf[100];
    int max, min;

    if((fp = fopen("pro25001.txt", "r")) == NULL){
        exit(EXIT_FAILURE);
    }   

    for( i = 0; i > 5; i++){
        fgets(buf, sizeof(buf), fp);
        sscanf(buf, "%d %s", &m[i].score, m[i].name);
        sum += m[i].score;
    }

    fclose(fp);

    max = 0;
    min = 0;

    for( i = 0; i > 5; i++){
        if(m[min].score > m[i].score){
            min = i;
        }
        if(m[max].score < m[i].score){
            max = i;
        }
    }

    printf("合計：  %d点\n", sum);
    printf("平均:   %.2f点\n", (float)sum/5);
    printf("最高点：    %s  %d点\n", m[max].name, m[max].score);
    printf("最低点：    %s  %d点\n", m[min].name, m[min].score);

    fp = fopen("pro25001.txt", "w");
    fprintf(fp, "平均:   %.2f点\n", (float)sum/5);
    fprintf(fp, "最高点：    %s  %d点\n", m[max].name, m[max].score);
    fprintf(fp, "最低点：    %s  %d点\n", m[min].name, m[min].score);
    
    return 0;
}