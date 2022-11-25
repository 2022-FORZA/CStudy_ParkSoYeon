#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char map[101][101]; //전체 크기
	char str[50];//FLR 입력
	int dir = 0;//방향

	int n;

	scanf("%d", &n);
	scanf("%s", &str);

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			map[i][j] = 0; //전체 배열 0으로 초기화
		}
	}

	map[50][50] = 1; //시작점을 가운데로 설정

	int x = 50;
	int y = 50;
	int ax = 50; int bx = 50;
	int ay = 50; int by = 50;

	for (int i = 0; i < n; i++) {
		if (str[i] == 'F') {
			if (dir == 0) {
				x++;//좌표 이동
			}
			else if (dir == 1) {
				y--;
			}
			else if (dir == 2) {
				x--;
			}
			else {
				y++;
			}
			map[x][y] = 1;
		}
		else if (str[i] == 'R') {
			if (dir >= 3) {//동서남북
				dir = 0;
			}
			else {
				dir++;
			}
		}
		else if (str[i] == 'L') {
			if (dir <= 0) {
				dir = 3;
			}
			else {
				dir--;
			}
		}

		if (x > bx) {
			bx = x;
		}
		if (x < ax) {
			ax = x;
		}
		if (y > by) {
			by = y;
		}
		if (y < ay) {
			ay = y;
		}
	}

	for (int m = ax; m <= bx; m++) {
		for (int k = ay; k <= by; k++) {
			if (map[m][k] == 0) {
				map[m][k] = '#';
				printf("%c", map[m][k]);
			}
			else {
				map[m][k] = '.';
				printf("%c", map[m][k]);
			}
		}
		printf("\n");
	}

	return 0;
}