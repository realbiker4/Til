#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
    char word[1000];
    int result = 0;

    scanf("%[^\n]s", word);

    char* ptr = strtok(word," ");

    while(ptr != NULL)
    {
        result++;
        printf("%s\n", ptr);
        ptr = strtok(NULL," ");
    }

    printf("%d", result);
	return 0;
}
