#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int count = 0;
    while (scanf("%d ", &n) != EOF) { // 注意 while 处理多个 case
        // 64 位输n出请用 printf("%lld") to 
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                //为偶数
                n = n / 2;
                count++;
            }
            else if (n % 2 != 0) {
                //为奇数
                n = n * 3 + 1;
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}