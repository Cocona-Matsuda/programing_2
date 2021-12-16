#include<stdio.h>
#include<stdlib.h>

struct s
{
    int no;
    float tem;
};

int main(void){
    FILE *fp, *fp_out;
    struct s m[50];
    char buf[100];
    int check;

    if((fp = fopen("temperature.csv", "r")) == NULL){
        exit(EXIT_FAILURE);
    }
    if((fp = fopen("temperature_check.csv", "w")) == NULL){
        exit(EXIT_FAILURE);
    }
    if((fp = fopen("slight_cold.csv", "w")) == NULL){
        exit(EXIT_FAILURE);
    }

    while(fgets(buf, sizeof(buf), fp) != NULL){
        fgets(buf,sizeof(buf), fp);
        sscanf(buf, "%d %d", &m[i].no, m[i].name);
    }



    return 0;
}