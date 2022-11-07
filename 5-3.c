#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {

	char num[10];
	scanf("%s", num);
	char tmp;

	for (int i = 1; i < strlen(num); i++) {
		for (int j = i - 1; j>=0; j--) {
			if (num[j] < num[j + 1]) {
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	printf("%s", num);
	return 0;
}