#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double N ,ret;
    while (scanf("%lf ", &N) != EOF) { // ע�� while ������ case
        // 64 λ������� printf("%lld") to 
        while (N)
        {
             ret += 1 / N;
            N--;
        }

        printf("%.6lf\n", ret);
    }
    return 0;
}