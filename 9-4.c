#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {


	char s[6];
	int val = 0;

	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			val = val * 16 + s[i] - '0';
		}
		else if (s[i] >= 'A' && s[i] <= 'F') {
			val = val * 16 + s[i] - 'A' + 10;
		}
	}
	printf("%d", val);
}


