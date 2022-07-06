#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int N, M;
	int arr[100];
	int res;
	int max = 0;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 1; j < N - 1; j++)
		{
			for (int k = 2; k < N; k++)
			{
				res = arr[i] + arr[j] + arr[k];
				if (res <= M && res > max)
				{
					max = res;
				}
			}
		}
	}
	printf("%d", max);

	return 0;
}