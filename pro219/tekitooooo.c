#include <stdio.h>
#include <conio.h>
 
int main(void)
{
    char c;
    int r;
    int com;
    int man;
    
    int i;
    int score_m = 0;
    int score_c = 0;
    
    char s;
    
    printf("乱数の種(奇数)>>");
    scanf("%d", &r);
    
    //ルール説明
    printf("これからカードバトルを行うよ！\nルールは簡単！\n3枚のカードからから好きなカードを選んで出すだけ！\n");
    printf("カードは炎、水、木があるよ。\n炎は木に強く、水に弱い。\n水は炎に強く、木に弱い。\n木は水に強く、炎に弱い。\n");
    printf("炎は１を入力\n水は２を入力\n木は３を入力\n");
    printf("準備は良い？\nでは開始！\n");
    
    for (i = 0; i < 10; i++){
        c = getch();
        
        printf("あなた:");
        switch (c){
            case '1':   printf("炎");
                        break;
            case '2':   printf("水");
                        break;
            case '3':   printf("木");
                        break;
            case '0':   printf("終了");
                        break;
            default: printf("0～3を入力してください。");
        }
        
        //乱数の生成
        r = (r * 12869 + 6925) % 32768;
        com = (r % 3) + 1;
        
        printf("vsコンピュータ:");
        switch (com){
            case 1: printf("炎\n");
                        break;
            case 2: printf("水\n");
                        break;
            case 3: printf("木\n");
                        break;
        }
        
        //プレイヤーが勝ちのパターン
        if ((c == '1' && com == 2)
                || (com == 2 && c == '3')
                || (com == 3 && c == '1'))
        {
            score_m++;
        }
        //コンピュータが勝ちのパターン
        else if ((com == 1 && c == '2')
                ||(com == 2 && c == '3')
                ||(com == 3 && c == '3'))
        {
            score_c++;
        }
        //あいこのパターン
        else {
        }
    }
    
    printf("%d勝ち%d負%d引き分け:", score_m, score_c, 10 - (score_m + score_c));
    
    if (score_m > score_c){
        printf("あなたの勝利！！\n");
    }
    else if (score_m < score_c){
        printf("コンピュータの勝ち...\n");
    }
    else {
        printf("引き分け\n");
    }
    
    printf("コンティニュー？  Yes/No...");
    scanf("%d", &s);
    
    
    return (0);
}