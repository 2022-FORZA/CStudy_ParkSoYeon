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

=======
#define _CRT_SEUCRE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int N;
    int M;
    static char arr[51] = { 0, }; //�迭 0���� �ʱ�ȭ
    //static�� ������ ������ ���α׷� ������ �� �Ҵ�, ���α׷� ���� �� �Ҹ�
    int location; //1>=location, location<=N
    int c = 1;
    int result = 0;
    
    scanf("%d %d", &N,&M); //N�� M �Է� �ޱ� 10 3

    int j;
    for (int i= 0; i < M; i++){ 
        scanf("%d", &location);//M�� �Է¹ޱ� 2 9 5
        for (j = 0; c != location; c = c % N + 1) {
            j += arr[c] == 0; //c=3 10 6
        }
        if (j < (N - i - j)) {
            result += j;
        }
        else {
            result += N - i - j;
        }
        arr[c] = 1; //������ ������ �ش� �迭 ��ġ�� 1
    }
    printf("%d\n", result);

    return 0;

   
>>>>>>> 5bdbc7242ed6d0a95fedcc33cc2949f43a40d097
}