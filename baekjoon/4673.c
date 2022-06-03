#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int selfNumber[10001];
	int result;
	int i = 1;
	int num;

	while (i <= 10000)
	{
		num = i;
		result = num;
		while (num >= 10)
		{
			result = result + (num % 10);
			num = num/ 10;
		}
		result = result + (num % 10);
		selfNumber[i] = result;
		i++;
	}

	for (int j = 1; j < 10000; j++)
	{
		
		for (int k = 1; k <= 10000; k++)
		{
			if (j == selfNumber[k])
			{
				break;
			}
			else if(k == 10000)
			{
				printf("%d\n", j);
			}
		}
	}
	return 0;
}

