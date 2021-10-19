#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    int main(void) {
  int *x, *y;  //ポインタの用意

  // 記憶領域の動的確保
  x = (int *)malloc(sizeof(int));
  y = (int *)malloc(sizeof(int));

  if (x == NULL || y == NULL) {
    printf("確保に失敗しました。\n");
    exit(EXIT_FAILURE);
  } else {
    printf("整数１：");
    scanf("%d", &x);
    printf("整数２：");
    scanf("%d", &y);

    printf("整数１：%d\n整数２：%d\n", x, y);
    free(x);
    free(y);
  }
  return 0;
}
