#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {

	int num;
	int R;//�ݺ�Ƚ��
	char S[20];//���ڿ�

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %s", &R, S);//3 abcd

		for (int k = 0; k < strlen(S); k++) {
			for (int j = 0; j < R; j++) {
				printf("%c", S[k]);
			}
		}
		printf("\n");
	}

	return 0;
}