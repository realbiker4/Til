#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void f_pptr(int **pptr)
{
	*pptr = (int*)malloc(sizeof(int));
}

int main(void)
{
	/*int num1 = 10;
	int* num1ptr = &num1; // data


	int num2 = 20;
	int* num2ptr; // heap

	num2ptr = (int*)malloc(sizeof(int));

	free(num2ptr);*/

	int* ptr;

	f_pptr(&ptr);

	*ptr = 10;

	printf("%d", *ptr);

	free(f_pptr);

	return 0;
}
