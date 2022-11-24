#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fact(int i, int n) {//n은 곱해야 하는 수
	if (n == 1) {
		return i;
	}
	i  *= n;
	while (i % 10 == 0) {//마지막 자리에 0이 생기면 0제거
		i /= 10;
	}
	i %= 100000;
	return fact(i, n - 1);//팩토리얼 재귀함수로
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