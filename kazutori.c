#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// マクロの定義
#define SIZE 4  // ゲーム盤の大きさ
#define SENTE 0 // 先手
#define GOTE 1  //後手

// 得点管理用配列
int score[2];

// ゲーム版配列
int Table[SIZE][SIZE]

// ゲーム盤表示関数
void disp(int player, int no){
  int i, j;
  

    for(i = 0; i < SIZE; i++){
    for(j = 0;j < SIZE; j++){
      printf("%3d", Table[i][j]);
    }
    printf("\n");
  }
}

// ゲーム盤生成関数
void int_table (void){

  int i, j;
  
  for(i = 0; i < SIZE; i++){
    for(j = 0;j < SIZE; j++){
      Table[i][j] = rand () % 19 -9;    
    }
    
  }
  score[0] = 0;
  score[1] = 0;
}


// main関数
int main (void){
  int i, j;
  
  srand (time(NULL));
  for(i = 0;i < 100; i++){
    printf("%d\n", rand());
  }
  
  // ゲーム盤生成関数の呼び出し
  int_table();
  
  // ゲーム盤の表示
  disp(SENTE, 0);
  
  return 0;
}
