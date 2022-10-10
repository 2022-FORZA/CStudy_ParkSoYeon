#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N;
	int score[1001] = { 0, };
	int max = 0;
	float result = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
		if (score[i] > max) {
			max = score[i];
		}
	}

	for (int j = 0; j < N; j++) {
		result = result + (float)score[j] / max * 100;
	}

	printf("%f\n", result / N);
}