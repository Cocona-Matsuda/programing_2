#include <stdio.h>
#include <string.h>

//構造体の定義
struct student{
    int no;
    char name[30];
    char se[30];
};

int main (void){
    //構造体変数の宣言
    struct student a[3];
    struct student *q;
    int i;

    q = a;

    for ( i = 0; i < 3; i++){
        printf("学籍番号：");
        scanf("%d", &q[i].no);
        printf("氏名：");
        scanf("%s", &q[i].name);
        printf("所属学科：");
        scanf("%s", &q[i].se);
    }
    for (i = 0; i < 3; i++) {
      printf("%s(%s:%d)\n", q[i].name, q[i].se, q[i].no);
    }
    return 0;
}