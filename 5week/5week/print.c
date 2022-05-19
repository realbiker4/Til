#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) 
{
	char name, sex, birth[50];
	printf("이름을 입력하세요:");
	scanf("%c", &name);
	puts ("성별을 입력하세요(M/F):");
	sex = getchar();
	puts("생년월일을 입력하세요:");
	gets_s(birth, sizeof(birth));

	printf("%c", name);
	putchar(sex);
	puts(birth);
	return 0;
}
