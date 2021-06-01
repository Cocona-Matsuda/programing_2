#include <stdio.h>
#include <string.h>

int main (void){
    int kuku[9][9];
    int i;
    int j;

    for ( i = 1; i <= 9; i++){
        for ( j = 1; j <= 9; j++){
            kuku[i - 1][j -1] = i * j;
        }
    }
    for ( i = 1; i <= 9; i++){
        for ( j = 1; j <= 9; j++){
            printf("%d * %d = %d\n", i, j, kuku[i - 1][j - 1]);
        }
    }

    return 0;
}