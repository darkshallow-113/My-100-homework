#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main() {
    double N, ret, sum, tmp;
    int flag = 1;
    while (scanf("%lf ", &N) != EOF) { // ע�� while ������ case
        // 64 λ������� printf("%lld") to 
        for (int i = 1; i <= N; i++)
        {
            tmp += flag * (2 * i - 1);

            sum += 1.0 / tmp;
            flag = -flag;
        }
        printf("%.3lf", sum);

    }
    return 0;
}