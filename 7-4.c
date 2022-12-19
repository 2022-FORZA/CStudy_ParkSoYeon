#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int num1, num2;
	scanf("%d %d", &num1, &num2);

	int arr[1000];
	int count = 0;

	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < i; j++) {
			if (count == 1000) {
				break;
			}
			arr[count] = i;
			count++;
		}
	}

	int sum1 = 0, sum2 = 0;
	for (int k = 0; k < num1 - 1; k++) {
		sum1 += arr[k];
	}
	for (int m = 0; m < num2; m++) {
		sum2 += arr[m];
	}

	printf("%d", sum2 - sum1);
	return 0;
}