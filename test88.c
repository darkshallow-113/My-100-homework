#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int count = 0;
    while (scanf("%d ", &n) != EOF) { // ע�� while ������ case
        // 64 λ��n������ printf("%lld") to 
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                //Ϊż��
                n = n / 2;
                count++;
            }
            else if (n % 2 != 0) {
                //Ϊ����
                n = n * 3 + 1;
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}