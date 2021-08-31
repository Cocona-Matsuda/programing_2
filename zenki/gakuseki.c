#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct data
{
    /* data */
    char name[20];          //名前
    int id;                 //学籍番号
    struct data *next;  //ポインタ

}DATA;

DATA *head = NULL;
DATA *tail = NULL;

/* プロトタイプ宣言 */
DATA *createNode(void);         //ノード生成
void addNodeToList(void);       //ノード結合
void insertNodeToList(void);    //リスト挿入
static void printList(DATA *head);           //表示
static DATA * sortList(DATA *head); //ソートするやつ

int main (void){
  int input;
  while (1)
  {
    printf("------------操作方法------------------\n");
    printf("1 : データ入力\n");
    printf("2 : 見せて！\n");
    printf("3 : ノードの間に挿入\n");
    printf("コマンド：");

    scanf("%d", &input);

    switch (input){
      case 1:
          addNodeToList();
          break;
      case 2:
        printList(head);
        break;
      case 3:
        insertNodeToList();
      default:
        printf("意味わかんない\n");
        break;
  }
    printf("\n");
}

    return 0;
}// 操作入力

DATA *createNode(void){
    DATA *newNodePos;
    newNodePos = (DATA *)malloc(sizeof(DATA));

    return newNodePos;
}// ノード生成

void addNodeToList(void){
    DATA *newNodePos;
    int inputId;
    char inputName[20];

    newNodePos = createNode();

    printf("学籍番号教えて：");
    scanf("%d", &inputId);
    newNodePos -> id = inputId;

    printf("名前は：");
    scanf("%s", inputName);
    strcpy(newNodePos -> name, inputName);

    if ((head == NULL) && (tail == NULL)){
        head = newNodePos;
        tail = newNodePos;
    }else{
        tail -> next = newNodePos;
        tail = newNodePos;
    }
    tail -> next = NULL;
    printf("データ追加！\n");
}// ノードの末端にノードを追加

static void printList(DATA *head){
    DATA *current, *temp;
    temp = head;
    if ((head == NULL) && (tail == NULL)){
        printf("誰もいないみたい\n");
        return;
    }

    current = head;

    printf("-------------------------------\n");

    while (1){
        printf("学籍番号    : %d\n", current -> id);
        printf("名前    ： %s\n", current -> name );
        printf("-------------------------------\n");

        if(current -> next != NULL){
            current = current -> next;
        }else{
            printf("これで終わり\n");
            break;
        }
    }
    head = sortList(head);

    while (temp != NULL)
    {
        printf("学籍番号    : %d\n", temp->id);
        printf("名前        : %s\n", current -> name);
        if(temp->next == NULL){
            printf("\n");
        }else{
          printf("-------------------------------\n");
        }
        temp = temp->next;
    }
    return;
}// 表示
static DATA * sortList(DATA *head){
    DATA *headUnsorted, *headSorted;
    DATA *max, *prevMax, *prevComp;

    printf("リストを昇順ソートします\n");
    headUnsorted = head;
    headSorted = NULL;

    while (headUnsorted != NULL) {
      max = headUnsorted;
      prevMax = NULL;
      prevComp = headUnsorted;

      while (prevComp->next != NULL) {
        if ((prevComp->next)->id > max->id) {
          max = prevComp->next;
          prevMax = prevComp;
        }
        prevComp = prevComp->next;
      }

      if (prevMax == NULL) {
        headUnsorted = max->next;
      } else {
        prevMax->next = max->next;
      }

      if (headSorted == NULL) {
        headSorted = max;
        max->next = NULL;
      } else {
        max->next = headSorted;
        headSorted = max;
      }
    }
    return headSorted;
}
void insertNodeToList(void) {
  char insertTargetName[20] = "";
  DATA *current, *temp, *newNodePos;
  int inputId;
  char inputName[20];

  printf("挿入先のノードのnameを入力してください。\n");
  printf("入力されたnameを持つノードの後ろに、新しいノードを挿入します。\n");
  scanf("%s", insertTargetName);

  current = head;

  while (current != NULL) {
    if (strcmp(current->name, insertTargetName) == 0) {
      printf("ノードが見つかりました。\n");
      break;
    } else {
      current = current->next;
    }

    if (current == NULL) {
      printf("ノードが見つかりませんでした。\n");
      return;
    }
    newNodePos = createNode();

    printf("学籍番号を入力：");
    scanf("%d", &inputId);
    newNodePos->id = inputId;

    printf("名前を入力：");
    scanf("%s", inputName);
    strcpy(newNodePos->name, inputName);

    temp = current->next;

    current->next = newNodePos;

    newNodePos->next = temp;

    printf("ノードを挿入しました。\n");
  }
}  //ノード挿入
