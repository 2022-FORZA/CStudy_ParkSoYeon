#define _CRT_SEFURE_NO_WARNINGS
#include<stdio.h>

int main() {

	long long int A; //���� ���
	long long int B; //�������
	long long int C; //��Ʈ�� ����
	long long int n=1;

	scanf("%lld %lld %lld", &A, &B, &C);

	n = A / (C - B);
	if (B >= C) {
		n = -1;
	}
	while (n != -1) {
		if (A + B * n < C * n) {
			break;
		}
		n++;
	}

	printf("%lld", n);

	return 0;
	
}