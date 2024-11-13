#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double N ,ret;
    while (scanf("%lf ", &N) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        while (N)
        {
             ret += 1 / N;
            N--;
        }

        printf("%.6lf\n", ret);
    }
    return 0;
}