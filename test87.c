#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int a;
	scanf("%d", &a);

	int yu = 0;
	int sum = 0;
	while (a > 0) {
		yu = a % 10;
		sum += yu;
		a /= 10;
	}

	printf("%d", sum);

	return 0;
}
