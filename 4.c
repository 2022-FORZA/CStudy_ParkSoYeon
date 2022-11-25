<<<<<<< HEAD
#define _CRT_SEFURE_NO_WARNINGS
=======
#define _CRT_SECURE_NO_WARNINGS
>>>>>>> 5bdbc7242ed6d0a95fedcc33cc2949f43a40d097
#include<stdio.h>

int main() {

<<<<<<< HEAD
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
	
=======
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
>>>>>>> 5bdbc7242ed6d0a95fedcc33cc2949f43a40d097
}