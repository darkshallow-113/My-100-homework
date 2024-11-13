#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int count = 0;

    for (int i = 1; i <= 2019; i++)
    {
        int tmp = i;
        while (tmp > 0)
        {
            if (tmp % 10 == 9)
            {
                count++;
                break;
            }
            else {
                tmp /= 10;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}