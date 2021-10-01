#include "myhead01.h"

int main(void) {
  char str1[32] = "hello";
  char str2[] = "byebye";

  strcat(str1, str2);
  printf("%s\n", str1);

  return 0;
}