#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int t;
	int n;
	scanf("%d", &t);
	int method[11];
	method[0]=1;
	method[1] = 1;
	method[2] = 2;
	method[3] = 4;

	int i;
	int j;

	for ( i = 0; i < t; i++) {
		scanf("%d", &n);
		for ( j =4; j < n+1; j++) {
			method[j] = method[j - 3] + method[j - 2] + method[j - 1];
		}
		printf("%d\n", method[n]);
	}

	

	return 0;
}

