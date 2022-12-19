#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sorting(int v[],int n) {
	int i, j, temp;

	for (int i = 1; i < n; i++) {
		for (j = i - 1; j >= 0 && v[j] > v[j + 1]; j--) {
			temp = v[j];
			v[j] = v[j + 1];
			v[j + 1] = temp;
		}
	}
}

int main() {

	int N;
	int k;
	int arr[1000];
	scanf("%d %d", &N, &k);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	sorting(arr,N);

	printf("%d", arr[N-k]);

	return 0;
}

