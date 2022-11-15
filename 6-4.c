#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int main() {

	int d;
	int h;
	int w;
	scanf("%d %d %d", &d, &h, &w);

	double d2;
	double h2;
	double w2;
	d2 = sqrt((h * h) + (w * w)); //대각선 비율
	h2 = d * h / d2;
	w2 = d * w / d2;

	printf("%d %d", (int)h2, (int)w2);


	return 0;
}