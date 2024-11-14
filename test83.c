#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        if (n % 2 == 0)
        {
            //n为偶数，有n/2个（-1）
            printf("%d\n", n / 2 * (-1));
        }
        else {
            //n为奇数，有0
            printf("%d", (n - 1) / 2 + 1);
        }
    }
    return 0;
}