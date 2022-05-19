#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num,arr;
	int a[10000000];
	printf("테스트 케이스 입력:");
	scanf("%d", &num);
	for (int i = 0; i <= num-1; i++)
	{
		scanf("%d", &arr);
		a[i] = arr;
	}
	for (int k = 0; k <= num - 1; k++)
	{
		for (int j = 2; j <= a[0]; j++)
		{
			if (a[k] % j == 0)
			{
				printf(a[k]);
			}
		}
	}
	return 0;
}