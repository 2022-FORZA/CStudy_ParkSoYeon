#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fact(int i, int n) {//n�� ���ؾ� �ϴ� ��
	if (n == 1) {
		return i;
	}
	i  *= n;
	while (i % 10 == 0) {//������ �ڸ��� 0�� ����� 0����
		i /= 10;
	}
	i %= 100000;
	return fact(i, n - 1);//���丮�� ����Լ���
}

int main() {

	int N;
	int result;
	scanf("%d", &N);

	result = fact(1, N);
	result %= 10;

	printf("%d", result);


	return 0;
}