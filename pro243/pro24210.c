#include<stdio.h>
#include<stdlib.h>

// 構造体の定義
struct tag
{
    int x;
    float y;
};


int main(void){
    struct tag a;   //構造体変素の宣言
    struct tag *q;  //構造体を指すポインタの宣言
    
    q = &a;
    
    q->x = 10;
    q->y = 3.14;

    printf("x : %d\n", a.x);
    printf("y : %f\n", a.y);

    return 0;
}
