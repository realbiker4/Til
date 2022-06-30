#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct student
{
	char name[10];
	char tel[15];
	int age;
};

int main(void)
{
	struct student info;

	printf("name:");
	scanf("%s", info.name);
	printf("tel:");
	scanf("%s", info.tel);
	printf("age:");
	scanf("%d", &info.age);

	printf("name:%s\ntel:%s\nage:%d\n", info.name, info.tel, info.age);

	return 0;
}