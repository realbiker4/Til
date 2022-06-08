#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	char word[100];
	int a;
	int length = 0;


	scanf("%s", word);


	for(int j = 0; j < 26; j++)
    {
        a = (char)97+j;
        for(int i = 0; i < strlen(word)+1; i++)
        {
            if(word[i] == a)
            {
                printf("%d ", i);
                break;
            }
            else if(i == strlen(word))
            {
                printf("-1 ");
            }
        }
    }

	return 0;
}
