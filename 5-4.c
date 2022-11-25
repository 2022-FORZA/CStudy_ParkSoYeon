#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	int num_3, num_4, num_5, num_6;
	scanf("%d", &a);
	scanf("%d", &b);

	num_3 = a * ((b % 100) % 10);
	num_4 = a * ((b % 100)/10);
	num_5 = a * (b / 100);
	num_6 = num_3 + (num_4 * 10) + (num_5 * 100);

	printf("%d\n", num_3);
	printf("%d\n", num_4);
	printf("%d\n", num_5);
	printf("%d\n", num_6);
	return 0;
}