#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int arr[5] = { 1,3,5,7,9 };

	int* ptr = arr;

	printf("%d\n", *ptr);
	*ptr += 1;
	//*ptr++;
	printf("%d\n", *ptr);


	return 0;
}