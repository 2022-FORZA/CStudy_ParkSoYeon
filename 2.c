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

   
}