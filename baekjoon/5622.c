#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
    char word[1000];
    int result = 0;

    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++)
    {
        if((int)word[i]>=65 && (int)word[i]<=67)
        {
            result += 3;
        }
        else if((int)word[i]>=68 && (int)word[i]<=70)
        {
            result += 4;
        }
        else if((int)word[i]>=71 && (int)word[i]<=73)
        {
            result += 5;
        }
        else if((int)word[i]>=74 && (int)word[i]<=76)
        {
            result += 6;
        }
        else if((int)word[i]>=77 && (int)word[i]<=79)
        {
            result += 7;
        }
        else if((int)word[i]>=80 && (int)word[i]<=83)
        {
            result += 8;
        }
        else if((int)word[i]>=84 && (int)word[i]<=86)
        {
            result += 9;
        }
        else if((int)word[i]>=87 && (int)word[i]<=90)
        {
            result += 10;
        }
    }
    printf("%d",result);
	return 0;
}
