#include <stdio.h>

int main() {
    int m, n, a, b, c, flag;
    flag = a = b = c = 0;
    while (scanf("%d %d", &m, &n) != EOF) { // ע�� while ������ case
        // 64 λ������� printf("%lld") to 
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