#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;
	scanf("%d", &num);
	long long int arr[92] = {0,};
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;

	/*1 -> 1   1
	2 -> 10     1
	3 -> 100 101    2
	4 -> 1000 1001 1010    3
	5 -> 10000 10001 10010 10100 10101    5
	6-> 100000 100001 100010 100100 100101 101000 101001 101010   8*/

	for ( int i = 3; i <= num; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	printf("%lld", arr[num]);
	return 0;
}