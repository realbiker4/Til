#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void ptrNoUse(int num1)
{
	num1 += 5;
}

void ptrUse(int* num2)
{
	*num2 += 5;
}

int main(void)
{
	int num = 15;

	ptrNoUse(num);
	printf("%d\n", num);

	ptrUse(&num);
	printf("%d\n", num);

	return 0;
}