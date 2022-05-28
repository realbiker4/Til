#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	int ten, one;
	int res = 0;
	int count = 0;

	scanf("%d", &num);

	ten = num / 10;
	one = num % 10;

	while (res != num)
	{
		res = one * 10 + ((one + ten) % 10);

		ten = res / 10;
		one = res % 10;
		count = count + 1;
	}

	printf("%d", count);
}