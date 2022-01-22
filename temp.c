//kazutori.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//マクロの定義
#define SIZE 6	//ゲーム盤の大きさ
#define SENTE 0	//先手を意味するマクロ
#define GOTE 1	//後手を意味するマクロ
#define NO_VALUE -99	//取得済み要素の値
#define MT 300	//AI試行回数の最大値

//得点管理用配列
int score[2];

//ゲーム盤配列
int Table[SIZE][SIZE];

int ai01go(int player, int no)
{
	int s;	//選択した番号を入力する変数
	int check = 0;
	int t = 0;
	int i;
	
	while (1){
		t++;	//思考回数のカウント
		//引数playerを使って、現在選択するのが先手か後手かを判定し、表示する。
		//（例：先手の選択>>）
		if (check == 0){
			if (player == SENTE){
				printf("先手の選択>> ");
			}
			else {
				printf("後手の選択>> ");
			}
			check = 1;
		}
	
		//AI01号
		//0～SIZEの整数をランダムに選ぶ能力がある。
		if (t <= MT){
			//AIの戦略
			s = rand() % SIZE;
			printf("%d\n", s);
		}
		else {
			//端から見ていき未取得の場所があればそこを取得
			if (player == SENTE){
				for (s = 0; s < SIZE; s++){
					if (Table[no][s] != NO_VALUE){
						break;
					}
				}
			}
			else {
				for (s = 0; s < SIZE; s++){
					if (Table[s][no] != NO_VALUE){
						break;
					}
				}
			}
		}
		
		//０～SIZE以外の範囲または取得済みの場所を選択した場合は再選択させる。
		if (s >= 0 && s < SIZE) {
			if (player == SENTE){
				if (Table[no][s] != NO_VALUE){
					break;
				}
			}
			else {
				if (Table[s][no] != NO_VALUE){
					break;
				}
			}
		}
	}
	
	return (s); //選択した行（列）番号を返す

}

//選択関数
int sel(int player, int no)
{
	int s;	//選択した番号を入力する変数
	
	while (1){
		//引数playerを使って、現在選択するのが先手か後手かを判定し、表示する。
		//（例：先手の選択>>）
		if (player == SENTE){
			printf("先手の選択>> ");
		}
		else {
			printf("後手の選択>> ");
		}
	
		//引数から選択できる行（列）を決定し、選択する番号を入力させる。
		scanf("%d", &s); //<<ここで人間が入力をしている。これをCPUに変更したい
		
		//０～SIZE以外の範囲または取得済みの場所を選択した場合は再選択させる。
		if (s >= 0 && s < SIZE) {
			if (player == SENTE){
				if (Table[no][s] != NO_VALUE){
					break;
				}
			}
			else {
				if (Table[s][no] != NO_VALUE){
					break;
				}
			}
		}
	}
	
	return (s); //選択した行（列）番号を返す
}

//ゲーム盤表示関数
void disp(int player, int no)
{
	int i;
	int j;
	
	printf("   ");
	for (i = 0; i < SIZE; i++){
		printf("%3d", i);
	}
	printf("\n");
	printf("   ");
	for (i = 0; i < SIZE; i++){
		printf("---");
	}
	printf("\n");
	
	//後手の取得できる列の表示
	printf("    ");
	if (player == GOTE){
		for (i = 0; i < no; i++){
			printf("   ");
		}
		printf("##\n");
	}
	else {
		printf("\n");
	}
	
	for (i = 0; i < SIZE; i++){
		printf("%d|", i);
		//先手の取得できる行の表示
		if (player == SENTE){
			if (i == no){
				printf("[");
			}
			else {
				printf(" ");
			}
		}
		else {
			printf(" ");
		}
		
		for (j = 0; j < SIZE; j++){
			if (Table[i][j] == NO_VALUE){
				printf(" **");
			}
			else {
				printf("%3d", Table[i][j]);
			}
		}
		//先手の取得できる行の表示
		if (player == SENTE){
			if (i == no){
				printf("]");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("    ");
	if (player == GOTE){
		for (i = 0; i < no; i++){
			printf("   ");
		}
		printf("##\n");
	}
	else {
		printf("\n");
	}
}

//ゲーム盤生成関数
void init_table(void)
{
	int i;
	int j;
	
	for (i = 0; i < SIZE; i++){
		for (j = 0; j < SIZE; j++){
			Table[i][j] = rand() % 19 - 9;
		}
	}
	
	//得点管理配列の初期化
	score[0] = 0;
	score[1] = 0;
}

//ゲーム終了判定関数
int judgement(void)
{
	int judge; //終了の場合は１，継続の場合は０
	int i;
	int j;
	int check;
	
	judge = 0;
	//行の判定
	for (i = 0; i < SIZE; i++){
		check = 0;
		for (j = 0; j < SIZE; j++){
			if (Table[i][j] != NO_VALUE){
				check = 1;
				break;
			}
		}
		
		if (check == 0){
			judge = 1;
			break;
		}
	}
	
	//列の判定
	//ここを完成させる
	for (i = 0; i < SIZE; i++){
		check = 0;
		for (j = 0; j < SIZE; j++){
			if (Table[j][i] != NO_VALUE){
				check = 1;
				break;
			}
		}
		
		if (check == 0){
			judge = 1;
			break;
		}
	}
	return (judge);
}


//ゲーム実行関数
int game(void)
{
	int player;
	int no;
	int no_tmp;
	
	//初期化
	player = SENTE;
	no = 0;
	
	while (1){
		//先手からスタートして交互に選択、取得を行う
		//１．ゲーム盤の表示**
		disp(player, no);
		
		//２．選択
		if (player == SENTE){
			no_tmp = sel(player, no);
		
		} else {
			no_tmp = ai01go(player, no);
		}
		
		//３．点数（score配列）の加算と表示
		if (player == SENTE){
			score[player] += Table[no][no_tmp];
			Table[no][no_tmp] = NO_VALUE;
		}
		else {
			score[player] += Table[no_tmp][no];
			Table[no_tmp][no] = NO_VALUE;
		}
		
		printf("\n--------------------------\n");
		printf("（先手）%2d vs %2d（後手）\n", score[SENTE], score[GOTE]);
		printf("--------------------------\n\n");
		no = no_tmp;
		
		//４．先手と後手の交代**
		player = (player + 1) % 2;
		
		//５．ゲーム終了判定 judgement関数
		if (judgement()){
			break;
		}
	}
	
	//勝敗の判定
	if (score[SENTE] > score[GOTE]){
		printf("先手の勝利\n");
	}
	else if (score[SENTE] < score[GOTE]){
		printf("後手の勝利\n");
	}
	else {
		printf("引き分け\n");
	}
	
	return (0);
}

//main関数
int main(void)
{
	int i;
	int j;
	
	srand(time(NULL));
	
	//ゲーム盤生成関数の呼び出し
	init_table();
	
	//ゲームの実行
	game();
		
	return (0);
}

    
    