#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int N;
    int i, j, sum[3];

    int (*q)[3];

    printf("クラスの人数：");
    scanf("%d", &N);

    q = (int (*) )malloc(sizeof(int));

    for (i = 0; i < 3; i++){
        sum[i] = 0;
    }
    for ( i = 0; i < N; i++){
        printf("%d人目の成績\n", i+1);
        
        printf("数学：");
        scanf("%d", &q[i][0]);
        sum[0] += q[i][0];

        printf("国語：");
        scanf("%d", &q[i][1]);
        sum[1] += q[i][1];

        printf("英語：");
        scanf("%d", &q[i][2]);
        sum[2] += q[i][2];
    }
    printf("------------個人の成績-----------\n");
    printf("１人目:");

    return 0;
}
