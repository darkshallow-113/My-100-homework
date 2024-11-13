#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int tmp = 0;
    int sum = 0;
    while (scanf("%d", &n) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        for (int i = 1; i <= n; i++)
        {
            tmp += i;
            sum += tmp;

        }
        printf("%d\n", sum);
    }
    return 0;
}