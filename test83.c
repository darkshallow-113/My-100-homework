#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) { // ע�� while ������ case
        // 64 λ������� printf("%lld") to 
        if (n % 2 == 0)
        {
            //nΪż������n/2����-1��
            printf("%d\n", n / 2 * (-1));
        }
        else {
            //nΪ��������0
            printf("%d", (n - 1) / 2 + 1);
        }
    }
    return 0;
}