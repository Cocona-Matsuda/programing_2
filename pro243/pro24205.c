#include<stdio.h>

int main(void){
    int m[2][3];
    int (*p)[3];
    int i, j;

    p = m;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("m[%d][%d]>>", i, j);
            scanf("%d", &p[i][j]);
        }
    }

    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 3; j++){
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}