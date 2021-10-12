#include <stdio.h>
#include <string.h>

int main (void){
  unsigned int num, and = 1;
  int i, sum;    // int型は32bitのため, 1のbitカウント用

  printf("16進数：");
  scanf("%x", &num);

    for (i = 0; i < 32; i++) {
        if (num & and == 1) {
            sum++;
        }
        // インクリメント
        num = num >> 1;
    }

    printf("1のbit数: %d\n", sum);
    return 0;
}