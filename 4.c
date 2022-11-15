#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int N;
	int k = 1;
	int time = 0;
	scanf("%d", &N); 

	while (N>0) {
		if (N < k) {
			k = 1;
		}
		N = N - k;
		k += 1;
		time += 1;
	}
	printf("%d", time);
}