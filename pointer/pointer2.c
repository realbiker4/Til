#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	printf("%d\n", arr);
	printf("%d\n", &arr);
	printf("%d\n", &ptr);

	return 0;
}

