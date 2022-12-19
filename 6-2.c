#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {

	int n=0; //토핑의 종류
	int a;//도우의 가격
	int b;//토핑의 가격
	int c;//도우의 열량
	int* arr_d;//n개의 토핑의 열량

	arr_d = (int*)malloc(sizeof(int) * n);


	scanf("%d", &n);
	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr_d[i]);
	}

	int j, k, tmp;
	for (j = 1; j < n; j++) { //n=3  1 2 3
		for (k = j - 1; k >= 0 && arr_d[k] < arr_d[k + 1]; k--) {//0   1 0  
			tmp = arr_d[k];
			arr_d[k] = arr_d[k + 1];
			arr_d[k + 1] = tmp;
		}
	}//큰 수부터 정렬

	//for (int t = 0; t < n; t++) {
	//	printf("%d ", arr_d[t]);
	//}

	int maxcal = c / a; //도우 칼로리

	for (int k = 0; k < n; k++) {
		a = a + b; //가격
		c = c + arr_d[k];//칼로리
		if ((c / a) > maxcal) {
			maxcal = c / a;
		}
	}

	printf("%d", maxcal);
	return 0;
}
