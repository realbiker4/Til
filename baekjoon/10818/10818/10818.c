#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int count;
	int arr[100];
	int max, min;

	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		int num;
		scanf("%d", &num);
		arr[i] = num;
	}
	max = arr[0];
	min = arr[0];
	for (int j = 0; j < count; j++)
	{
		if (max < arr[j])
		{
			max = arr[j];
		}
	}
	for (int k = 0; k < count; k++)
	{
		if (min > arr[k]);
		{
			min = arr[k];
		}
	}
	printf("%d %d", min, max);
	return 0;
}