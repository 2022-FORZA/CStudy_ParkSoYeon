<<<<<<< HEAD
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

=======
#define _CRT_SEUCRE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int N;
    int M;
    static char arr[51] = { 0, }; //배열 0으로 초기화
    //static의 데이터 영역은 프로그램 시작할 때 할당, 프로그램 종료 시 소멸
    int location; //1>=location, location<=N
    int c = 1;
    int result = 0;
    
    scanf("%d %d", &N,&M); //N과 M 입력 받기 10 3

    int j;
    for (int i= 0; i < M; i++){ 
        scanf("%d", &location);//M개 입력받기 2 9 5
        for (j = 0; c != location; c = c % N + 1) {
            j += arr[c] == 0; //c=3 10 6
        }
        if (j < (N - i - j)) {
            result += j;
        }
        else {
            result += N - i - j;
        }
        arr[c] = 1; //데이터 뽑으면 해당 배열 위치는 1
    }
    printf("%d\n", result);

    return 0;

   
>>>>>>> 5bdbc7242ed6d0a95fedcc33cc2949f43a40d097
}