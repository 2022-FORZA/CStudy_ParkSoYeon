#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {

	int n=0; //������ ����
	int a;//������ ����
	int b;//������ ����
	int c;//������ ����
	int* arr_d;//n���� ������ ����

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
	}//ū ������ ����

	//for (int t = 0; t < n; t++) {
	//	printf("%d ", arr_d[t]);
	//}

	int maxcal = c / a; //���� Į�θ�

	for (int k = 0; k < n; k++) {
		a = a + b; //����
		c = c + arr_d[k];//Į�θ�
		if ((c / a) > maxcal) {
			maxcal = c / a;
		}
	}

	printf("%d", maxcal);
	return 0;
}
