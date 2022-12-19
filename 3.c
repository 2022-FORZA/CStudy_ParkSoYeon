#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
<<<<<<< HEAD
#include<string.h>
#include<stdlib.h>

char str[20001][51];

int compare(const void* a, const void* b) {
	char* k1 = (char*)a;
	char* k2 = (char*)b;
	int* n1 = strlen(k1);
	int* n2 = strlen(k2);
	if (n1 < n2) { 
		return -1; 
	}
	else if (n1 > n2) {
		return 1; 
	}
	else{
		return strcmp(k1, k2);
	}
}


int main() {

	int num;

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", &str[i]);
	}
	qsort(str, num, sizeof(str[0]), compare);
	for (int i = 0; i < num; i++) {
		if (strcmp(str[i], str[i + 1]) != 0 || i == num - 1) {
			printf("%s\n", str[i]);
		}
	}
	return 0;
=======

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
>>>>>>> 5bdbc7242ed6d0a95fedcc33cc2949f43a40d097
}