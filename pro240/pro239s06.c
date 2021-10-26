#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROW 2
#define COL 3

int main (void){
    int (*p)[COL];
    int row;
    int col;

    p = (int (*) [COL])malloc(COL * ROW * sizeof(int));
    if(p == NULL){
        printf("mallocに失敗しました\n");
    }else{
        for(col = 0; col < COL; col++){
            for(row = 0;row < ROW;row++){
                printf("行%d桁%d =", row+1, col+1);
                scanf("%d", &p[row][col]);
            }
        }
        for(col = 0;col < COL; col++){
            printf("行%d 桁%d = %d\n", row+1, col+1, p[row][col]);
        }
        free(p);
    }
    return 0;
}