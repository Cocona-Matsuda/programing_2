#include <stdio.h>
#include <string.h>


//構造体の宣言
struct abc{
    int no;
    char name[30];
    char se[30];
};

int main (void){
    struct abc x;
    printf("学籍番号>>");
    scanf("%d", &x.no);

    printf("氏名>>");
    scanf("%s", x.name);

    printf("所属学科>>");
    scanf("%s", x.se);

    printf("%s(%s:%d)\n", x.name, x.se, x.no);

    return 0;
}