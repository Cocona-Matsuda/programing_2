#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int *p; //ポインタの用意

    // 記憶領域の動的確保
    p = (int *)malloc(sizeof(int));

    if (p == NULL){
        printf("確保に失敗しました。\n");
    }else{
      printf("整数：");
      scanf("%d", &p);

      printf("%d\n", p);
      free(p);
    }

    return 0;
}