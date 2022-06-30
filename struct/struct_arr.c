#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct
{
	char name[10];
	//char tel[15];
	int age;
} student;

int main(void)
{
	student info[3] = {{.name = "bob"}, {.name = "steve"}, {.name = "lisa"}};

	info[0].age = 20;
	info[1].age = 20;
	info[2].age = 20;

	for (int i = 0; i < sizeof(info) / sizeof(student); i++)
	{
		printf("name:%s\n", info[i].name);
		printf("age:%d\n", info[i].age);
	}

	return 0;
}