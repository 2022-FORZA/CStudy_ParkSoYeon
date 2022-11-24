#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char arr[1000001];
	int i = 0;
	int num_0 = 0;
	int num_1 = 0;

	while (1) {
		scanf("%c", &arr[i]); 
		
		if (arr[i] == '\n') {
			break;
		}
		i++;
	}

	i = 0; //iÃÊ±âÈ­

	while (1) {
		if (arr[i] == '0') {
			for (; arr[i] == '0'; i++) {
				;
			}
			num_0++;
		}
		else if (arr[i] == '\n') {
			break;
		}
		else {
			for (; arr[i] == '1'; i++) {
				;
			}
			num_1++;
		}

	}

	if (num_0 > num_1) {
		printf("%d", num_1);
	}
	else {
		printf("%d", num_0);
	}
	return 0;
}