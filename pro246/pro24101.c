#include<stdio.h>
#include<stdlib.h>

int main(void){
	float x, y;
	FILE *fp;
	FILE *fp2;
	
	if((fp =fopen("innum01.txt", "r"))  == NULL){
		printf("ファイルオープンに失敗しました。\n");
		exit(EXIT_FAILURE);
	}

	if((fp2 =fopen("innum02.txt", "r"))  == NULL){
		printf("ファイルオープンに失敗しました。\n");
		exit(EXIT_FAILURE);
	}
	
	printf("ファイルを読み込みます。\n");
	fscanf(fp, "%f", &x);
	fscanf(fp2, "%f", &y);
	printf("読み込まれたデータは[%g]と[%g]です。\n", x, y);
	
	printf("四則演算：\n");
	printf("足し算：%g\n", x+y);
	printf("ひき算：%g\n", x-y);
	printf("かけ算：%g\n", x*y);
	printf("わり算：%g\n", x/y);
	
	fclose(fp);
	fclose(fp2);
	
	return 0;    
}