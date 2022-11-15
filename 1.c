#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int min = 10000000001;
int max = -10000000001;
int arr[101] = { 0, };
int N;

void calculate(int plus, int minus, int multiply, int div, int num,int val) {


	if (N==num+1) {
		if (val > max) {
			max = val;
		}
		if (val < min) {
			min = val;
		}
	}

	if (plus != 0) {
		calculate(plus - 1, minus, multiply, div, num + 1, val + arr[num + 1]);

	}
	if (minus != 0) {
		calculate(plus, minus - 1, multiply, div, num + 1, val - arr[num + 1]);

	}
	if (multiply != 0) {
		calculate(plus, minus, multiply - 1, div, num + 1, val * arr[num + 1]);

	}
	if (div != 0) {
		calculate(plus, minus, multiply, div - 1, num + 1, val / arr[num + 1]);

	}


}

int main() {


	int plus, minus, multiply, div;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	int num = 0;

	scanf("%d %d %d %d", &plus, &minus, &multiply, &div);
	calculate(plus, minus, multiply, div,num, arr[0]);

	printf("%d\n%d", max, min);

	return 0;
}