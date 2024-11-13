#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 10000; i < 100000; i++)
    {
        sum = i / 10000 * i % 10000 + i / 1000 * i % 1000 + i / 100 * i % 100 + i / 10 * i % 10;
            if (sum == i)
            {
                printf("%d ", i);
            }
            else {
                ;
            }

    }
    return 0;
}