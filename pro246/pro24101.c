#include<stdio.h>
#include<stdlib.h>

int main(void){
	float x, y;
	FILE *fp;
	FILE *fp2;
	
	if((fp =fopen("innum01.txt", "r"))  == NULL){
		printf("�t�@�C���I�[�v���Ɏ��s���܂����B\n");
		exit(EXIT_FAILURE);
	}

	if((fp2 =fopen("innum02.txt", "r"))  == NULL){
		printf("�t�@�C���I�[�v���Ɏ��s���܂����B\n");
		exit(EXIT_FAILURE);
	}
	
	printf("�t�@�C����ǂݍ��݂܂��B\n");
	fscanf(fp, "%f", &x);
	fscanf(fp2, "%f", &y);
	printf("�ǂݍ��܂ꂽ�f�[�^��[%g]��[%g]�ł��B\n", x, y);
	
	printf("�l�����Z�F\n");
	printf("�����Z�F%g\n", x+y);
	printf("�Ђ��Z�F%g\n", x-y);
	printf("�����Z�F%g\n", x*y);
	printf("���Z�F%g\n", x/y);
	
	fclose(fp);
	fclose(fp2);
	
	return 0;    
}