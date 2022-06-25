#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b, v;
	int res = 0;
	int high = 0;

	scanf("%d %d %d", &a, &b, &v);
	while (1)
	{
		res++;
		high = high + a;
		if (high >= v)
		{
			break;
		}
		high = high - b;
	}
	printf("%d", res);
}

