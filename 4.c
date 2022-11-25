#define _CRT_SEFURE_NO_WARNINGS
#include<stdio.h>

int main() {

	long long int A; //고정 비용
	long long int B; //가변비용
	long long int C; //노트북 가격
	long long int n=1;

	scanf("%lld %lld %lld", &A, &B, &C);

	n = A / (C - B);
	if (B >= C) {
		n = -1;
	}
	while (n != -1) {
		if (A + B * n < C * n) {
			break;
		}
		n++;
	}

	printf("%lld", n);

	return 0;
	
}