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
			sum += num;//기호 전 수를 더해줌
			num = 0;//num을 다시 초기화
		}
		else if (str[i] == '-' || i == len) {
			sum += num;//기호 전 수 더해줌
			arr[a] = sum;//- 전까지의 합 새로운 배열에 넣어놓기
			a++;
			num = 0;
			sum = 0;//sum 초기화
		}
		else {//숫자
			num *= 10;
			num = num + str[i] - '0';//숫자로 바꿔줌
		}
	}

	total = arr[0];
	for (int k = 1; k < a; k++) {
		total -= arr[k];
	}

	printf("%d", total);

	return 0;

}