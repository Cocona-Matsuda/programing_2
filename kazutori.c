#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 8  // ゲーム板の大きさ
#define SENTE 0
#define GOTE 1
#define NO_VALUE -99
#define MT 300  // AI試行回数の最大値

int score[2];   // 得点管理用配列

int Table [SIZE][SIZE]; // ゲーム板配列

// AI作成例
int ai01go(int player, int no){
    int s;
    int check = 0;
    int t = 0;
    int i;

    while (1){
        t++;    // 試行回数のカウント
        if (check == 0){
            if (player == SENTE){
                printf("先手の選択>>");
            }else{
                printf("後手の選択");
            }
            check = 1;
        }

        // randam選択するAI
        if(t <= MT){
            s = rand()%SIZE;
            printf("%d\n",s);
        }else{
            if (player == SENTE){
                for(s=0; s<SIZE; s++){
                    if (Table[no][s]!=NO_VALUE){
                        break;
                    }
                }
            }else{
                for(s=0; s<SIZE;s++){
                    if (Table[s][no] !=NO_VALUE){
                       break;
                    }
                }
            }
        }
        if (s>=0 && s<SIZE){
            if (player==SENTE){
                if (Table[no][s]!=NO_VALUE){
                    break;
                }
            }else{
                if (Table[s][no]!=NO_VALUE){
                    break;
                }
            }
        }
    }
    return (s);
}
int sel(int player, int no){
    int s;
    while (1){
        if(player==SENTE){
            printf("先手の選択>>");
        }else{
            printf("後手の選択>>");
        }
        scanf("%d", &s);

        if(s>=0 && s<SIZE){
            if(player==SENTE){
                if(Table[no][s]!=NO_VALUE){
                    break;
                }
            }
        }else{
            if(Table[s][no]!=NO_VALUE){
                break;
            }
        }
    }
    return (s);
}
void disp(int player, int no){
    int i, j;

    printf(" ");
    for ( i = 0; i < SIZE; i++){
        printf("%3d",i);
    }
    printf("\n");
    printf("   ");
    for ( i = 0; i < SIZE; i++){
        printf("---");
    }
    printf("\n");

    printf("   ");
    if (player==GOTE){
        for ( i = 0; i < no; i++){
            printf("  ");
        }
        printf("##\n");
    }else{
        printf("\n");
    }
    for ( i = 0; i < 0; i++){
        printf("%d|",i);
        if(player==SENTE){
            if (i==no){
                printf("[");
            }else{
                printf("  ");
            }
        }else{
            printf("  ");
        }
        for ( j = 0; j < SIZE; j++){
            if(Table[i][j]==NO_VALUE){
                printf(" **");
            }else{
                printf("%3d",Table[i][j]);
            }
        }
        if (player==SENTE){
            if (i==no){
                printf("]");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    printf("  ");
    if(player==GOTE){
        for ( i = 0; i < no; i++){
            printf("  ");
        }
        printf("##\n");
    }else{
        printf("\n");
    }
}
void int_table(void){
    int i,j;
    for ( i = 0; i < SIZE; i++){
        for ( j = 0; j < SIZE; j++){
            Table[i][j]=rand()%19-9;
        }
    }
    score[0]=0;
    score[1]=0;
}
int judgement(void){
    int judge = 0;
    int i,j;
    int check;

    for ( i = 0; i < SIZE; i++){
        check = 0;
        for ( j = 0; j < SIZE; j++){
            if (Table[i][j]!=NO_VALUE){
                check = 1;
                break;
            }
        }
        if(check==0){
            judge=1;
            break;
        }
    }
    for ( i = 0; i < SIZE; i++){
        check=0;
        for ( j = 0; j < SIZE; j++){
            if (Table[j][i]!=NO_VALUE){
                check=1;
                break;
            }
        }
        if (check==0){
            judge=1;
            break;
        }
    }
    return (judge);
}
int game(void){
    int player;
    int no;
    int no_tmp;

    player=SENTE;
    no=0;

    while (1){
        disp(player,no);

        if (player==SENTE){
            no_tmp=sel(player,no);
        }else{
            no_tmp=ai01go(player,no);
        }
        
        if (player==SENTE){
            score[player] += Table[no][no_tmp];
            Table[no][no_tmp]=NO_VALUE;
        }else{
            score[player]+=Table[no_tmp][no];
            Table[no_tmp][no]=NO_VALUE;
        }
        printf("\n--------------------------\n");
        printf("（先手）%2d vs %2d（後手）\n", score[SENTE], score[GOTE]);
        printf("--------------------------\n\n");
        no = no_tmp;

        player=(player+1)%2;

        if (judgement()){
            break;
        }
    }
    if (score[SENTE]>score[GOTE]){
        printf("先手の勝利\n");
    }else if(score[SENTE]<score[GOTE]){
        printf("後手の勝利\n");
    }else{
        printf("引き分け\n");
    }
    return 0;
}
int main(void){
    int i,j;

    srand(time(NULL));
    int_table();
    game();

    return 0;
}