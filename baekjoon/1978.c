#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num, range;
	int arr[100];
	int size = 0;
	int result = 0;

	scanf("%d", &range);

	for (int i = 0; i < range; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
		size++;
	}

	result = size;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 1)
		{
			result--;
		}
		else if (arr[i] == 2)
		{

		}
		else
		{
			for (int j = 2; j < arr[i]; j++)
			{
				if (arr[i] % j == 0)
				{
					result--;
					break;
				}
			}
		}
	}
	printf("%d", result);
	return 0;
}