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

   
}