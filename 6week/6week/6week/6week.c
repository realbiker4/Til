#include<stdio.h>

int main(void)
{
	int index = 1;
	while (index < 100)
	{
		index++;
		if (index%2 == 0) continue;
		printf("%d���� ����\n", index);
	}
	return 0;
}