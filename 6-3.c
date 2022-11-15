#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>



int main() {
    int cnt = 0;
    int result = 51;
    int len_x, len_y;
    char x[51];
    char y[51];
    scanf("%s %s", x, y);

    len_x = strlen(x);
    len_y = strlen(y);

    for (int i = 0; i <= len_y - len_x; i++) {
        cnt = 0;
        for (int j = 0; j < len_x; j++) {
            if (x[j] != y[i + j])
                cnt++;
        }
        if (cnt > result) {
            ;
        }
        else {
            result = cnt;
        }
    }
    printf("%d", result);
}