#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int caculate(int size)
{
	int i = 0;
	int num;
	int num1, num2, num3;
	int result = 0;
	int temp;
	while (i < size-1)
	{
		i++;
		num = i;
		if (num < 100 && num > 0)
		{
			result++;
		}
		else
		{
			while (num > 100)
			{
				num3 = num % 10;
				num = num / 10;
				num2 = num % 10;
				temp = num / 10;
				num1 = temp % 10;
				if (num3 - num2 == num2 - num1)
				{
					result++;
				}
			}
		}
		printf("%d\n", result);
	}
	return result;
}

int main(void)
{
	int han;
	scanf("%d", &han);
	int key = caculate(han);
	printf("%d", key);
	
	return 0;
}

