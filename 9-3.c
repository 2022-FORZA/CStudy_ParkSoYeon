#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int x;
	int cnt = 0;
	scanf("%d", &x);

	while (x > 0) {
		if (x % 2 == 1) {
			cnt++;
		}
		x = x / 2;
	}

	printf("%d", cnt);

	return 0;

}