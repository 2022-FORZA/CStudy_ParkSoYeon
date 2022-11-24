#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int age[n];
	char name[n][200];
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &age[i], name[i]);
	}

	for (int j = 1; j <= 200; j++) {
		for (int k = 0; k < n; k++) {
			if (j == age[k]) {
				printf("%d %s\n", age[k], name[k]);
			}
		}
	}

	return 0;
}