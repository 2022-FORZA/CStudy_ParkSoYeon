#define _CRT_SEFURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


int main() {

	char str[51];
	int arr[25] = { 0, };
	int sum = 0;
	int num = 0;
	int a = 0;
	int total = 0;

	scanf("%s", str);
	int len = strlen(str);

	int i = 0;
	for (i = 0; i <= len; i++) {
		if (str[i] == '+') {
			sum += num;//��ȣ �� ���� ������
			num = 0;//num�� �ٽ� �ʱ�ȭ
		}
		else if (str[i] == '-' || i == len) {
			sum += num;//��ȣ �� �� ������
			arr[a] = sum;//- �������� �� ���ο� �迭�� �־����
			a++;
			num = 0;
			sum = 0;//sum �ʱ�ȭ
		}
		else {//����
			num *= 10;
			num = num + str[i] - '0';//���ڷ� �ٲ���
		}
	}

	total = arr[0];
	for (int k = 1; k < a; k++) {
		total -= arr[k];
	}

	printf("%d", total);

	return 0;

}