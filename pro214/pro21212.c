#include <stdio.h>
#include <string.h>

int main (void){
    int score[9][2];
    int i;
    int sum[2];

    sum[0] = 0;
    sum[1] = 0;

    for ( i = 0; i < 9; i++){
        printf("%d回表（Aチーム：", i + 1);
        scanf("%d", &score[i][0]);
        printf("%d回裏（Bチーム）：", i + 1);
        scanf("%d", score[i][1]);

        sum[0] += score[i][0];
        sum[1] += score[i][1];
    }
    printf("---------------------------\n");
    printf("チーム 1 2 3 4 5 6 7 8 9 計\n");
    printf("---------------------------\n");

    printf("    A   ");
    for ( i = 0; i < 9; i++){
        printf("%3d", score[i][0]);
    }
    printf("%4d\n", sum[i]);

    printf("    B   ");
    for ( i = 0; i < 9; i++){
        printf("%3d", score[i][1]);
    }
    printf("%4d\n", sum[1]);

    if (sum[0] > sum[1]){
        printf("Aチームの勝ち");
    }else if (sum[0] == sum[1]){
        printf("引き分け\n");
    }else{
        printf("Bチームの勝ち");
    }

    return 0;
}