#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// プロトタイプ宣言
void add(void);
void disp(void);

typedef struct personal{
    char name[32];
    int age;
    double height;
    double weight;
    struct personal *next;
} PERSONAL;

// 先頭を宣言
PERSONAL head = {"先頭の男", 43, 180.3, 123.4, NULL};

int main (void){
    int no;
    PERSONAL *p;
    PERSONAL *q;

    do{
        printf("---------------------------\n");
        printf("メニュー\n");
        printf("1:データの追加\n");
        printf("2:データの表示\n");
        printf("0:終了\n");
        printf("----------------------------\n");
        printf("メニューを選んでください：");
        scanf("%d", &no);

        switch(no){
            case 1: printf("データの追加を行います。\n");
                add();
                break;
            case 2: printf("データの表示を行います。\n");
                disp();
                break;
            case 0: printf("終了します。\n");
                break;
            default:printf("ちゃんと選んでください。\n");
        }

    }while (no);  

    p = head.next;
    while(p != NULL){
        q = p->next;
        free(p);
        p = q;
    }
    return 0;
}

// 追加用の関数
void add(void){
    PERSONAL *p;
    PERSONAL *tmp;

    // tmpが数珠つなぎのデータの最後尾になるように処理する
    for(tmp = &head; tmp->next != NULL; tmp = tmp->next);

    // 領域の動的確保
    p = (PERSONAL *)malloc(sizeof(PERSONAL));
    if(p == NULL){
        exit(EXIT_FAILURE);
    }

    // データの格納
    printf("名前：");
    scanf("%s", p->name);
    printf("年齢：");
    scanf("%d", &p->age);
    printf("身長：");
    scanf("%lf", &p->height);
    printf("体重：");
    scanf("%lf", &p->weight);

    // データの接続
    tmp->next = p;
    p->next = NULL;

}

// 表示用の関数
void disp(void){
    PERSONAL *p;
    for(p = &head; p != NULL; p = p->next){
        printf("%s(%d) %.1fcm %.1fkg\n", p->name, p->age, p->height, p->weight);
    }
}