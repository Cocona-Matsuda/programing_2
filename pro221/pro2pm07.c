#include <stdio.h>
#include <string.h>

void input_data(int *a);
int sum_data(int *a);

int main(void) {
  int a[10];
  int sum;

  input_data(a);
  sum = sum_data(a);

  printf("合計： %d", sum);

  return 0;
}
void input_data(int *p) {
  int i;

  for (i = 0; i < 10; i++) {
    printf("整数%d：", i + 1);
    scanf("%d", &p[i]);
  }
}
int sum_data(int *p) {
  int sum = 0, i;

  for (i = 0; i < 10; i++) {
    sum += p[i];
  }
  return sum;
}