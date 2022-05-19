#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int player;
	int com;
	printf("sissor:1, rock:2, paper:3\n");
	printf("player");
	scanf("%d", &player);
	printf("computer");
	scanf("%d", &com);

	if (player == 1)
	{
		goto sissor;
	}
	else if (player == 2)
	{
		goto rock;
	}
	else if (player == 3)
	{
		goto paper;
	}
	else
	{
		goto end;
	}

sissor:
	if (com == 1)
	{
		printf("draw");
	}
	else if (com == 2)
	{
		printf("lose");
	}
	else if (com == 3)
	{
		printf("win");
	}
	goto end;
rock:
	if (com == 1)
	{
		printf("win");
	}
	else if (com == 2)
	{
		printf("draw");
	}
	else if (com == 3)
	{
		printf("paper");
	}
	goto end;
paper:
	if (com == 1)
	{
		printf("lose");
	}
	else if (com == 2)
	{
		printf("win");
	}
	else if (com == 3)
	{
		printf("draw");
	}
	goto end;
end:
	return 0;
}