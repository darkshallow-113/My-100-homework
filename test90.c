#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int c, m, e;
        int sum = 0;
        scanf("%d %d %d", &c, &m, &e);
        getchar();
        sum = (c + m + e) / 3;
        if (sum < 60)
        {
            count++;
        }

    }

    printf("%d\n", count);

    return 0;
}