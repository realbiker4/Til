#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int arr1[4] = { 0, 1, };
	int arr2[3][4] = { 0, 1, };
	int *arr1ptr = arr1;
	int(*arr2ptr)[4] = arr2;
	// int*arr2Ptr

	printf("%d\n", *arr1);
	printf("%d\n", *arr2);
	printf("%d\n", *arr1ptr);
	printf("%d\n", *arr2ptr);

	printf("%d\n", arr2ptr[0][1]);
	return 0;
}
