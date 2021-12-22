#include<stdio.h>
#include<stdlib.h>

int main (void){
	FILE *fp;
	float x, y;
	
	if(((fp = fopen("innum03.txt", "r")) == NULL){四則演算
		printf("ファイルオープンに失敗しました。\n");
		exit(EXIT_FAILURE);
	}
	
	printf("ファイルを読み込みます。\n");
	fscanf(fp, "%g %g", &x, &y);
	printf("読み込まれたデータは[%g]と[%g]です。\n", x, y);
	
	printf("");	
	
	
	return 0;
}