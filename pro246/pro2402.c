#include<stdio.h>
#include<stdlib.h>

int main (void){
	FILE *fp;
	float x, y;
	
	if(((fp = fopen("innum03.txt", "r")) == NULL){�l�����Z
		printf("�t�@�C���I�[�v���Ɏ��s���܂����B\n");
		exit(EXIT_FAILURE);
	}
	
	printf("�t�@�C����ǂݍ��݂܂��B\n");
	fscanf(fp, "%g %g", &x, &y);
	printf("�ǂݍ��܂ꂽ�f�[�^��[%g]��[%g]�ł��B\n", x, y);
	
	printf("");	
	
	
	return 0;
}