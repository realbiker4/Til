#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
    int bee;
    int result = 0;
    int num = 1;

    scanf("%d", &bee);
    while(bee>=0)
    {
        result++;
        bee = bee-num;
        num+=6;
    }
    printf("%d", result);

	return 0;
}
