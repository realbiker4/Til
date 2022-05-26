#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)

{
    int num1, num2;
    int hund, ten, one;
    int numSav;
    int prt1, prt2, prt3;
    int result;

    printf("insert number:");
    scanf("%d", &num1);
    printf("insert number:");
    scanf("%d", &num2);

    hund = num2 / 100;
    numSav = num2 - hund * 100;
    ten = numSav / 10;
    one = numSav - ten * 10;

    printf("  %d\n", num1);
    printf("  %d\n", num2);
    printf("-----\n");
    prt1 = one * num1;
    printf("  %d\n", prt1);
    prt2 = ten * num1;
    printf(" %d\n", prt2);
    prt3 = hund * num1;
    printf("%d\n", prt3);
    printf("-----\n");
    result = prt3 * 100 + prt2 * 10 + prt1;
    printf("%d\n", result);

    return 0;

}

