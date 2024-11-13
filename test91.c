#include <stdio.h>

int main() {
    int m, n, a, b, c, flag;
    flag = a = b = c = 0;
    while (scanf("%d %d", &m, &n) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        for (int i = m; i <= n; i++)
        {
            a = i / 100;
            b = i / 10 % 10;
            c = i % 10;
            if (a * a * a + b * b * b + c * c * c == i)
            {
                printf("%d ", i);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("no\n");
        }

    }
    return 0;
}