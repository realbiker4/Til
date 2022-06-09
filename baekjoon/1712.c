#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
    int a,b,c;
    int result=1;

    scanf("%d %d %d",&a,&b,&c);

    if(b>=c)
    {
        printf("-1");
    }
    else
    {
        while(a+(b*result)>=(c*result))
        {
            result++;
        }
        printf("%d", result);
    }
	return 0;
}
