#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) 
{
	char name, sex, birth[50];
	printf("�̸��� �Է��ϼ���:");
	scanf("%c", &name);
	puts ("������ �Է��ϼ���(M/F):");
	sex = getchar();
	puts("��������� �Է��ϼ���:");
	gets_s(birth, sizeof(birth));

	printf("%c", name);
	putchar(sex);
	puts(birth);
	return 0;
}
