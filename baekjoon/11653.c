#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	int count = 2;
	int mid;
	
	scanf("%d", &num);

	mid = num;
	while (count != num)
	{
		if (mid % count == 0)
		{
			mid = mid / count;
			printf("%d\n", count);
		}
		else
		{
			count++;
		}
	}
}

