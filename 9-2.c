#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int N;
	long long cnt = 0;
	scanf("%d", &N);

	int num = 1;
	
	for (num = 1; num <= N; num *= 10) {
		cnt = cnt + N - num + 1;
	}

	printf("%lld\n", cnt);

	return 0;
}