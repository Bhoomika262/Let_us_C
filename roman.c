#include<stdio.h>

int roman(int);

void main()
{
    int n,r;
    printf("Enter the year: ");
    scanf("%d",&n); 
    printf("Roman value of year %d is ",n);
    r=roman(n);
}

int roman(int y)
{
    int yr=y;
    while(yr>=1000)
    {
        printf("m");
        yr=yr-1000;
    }

    while(yr>=500)
    {
        printf("d");
        yr=yr-500;
    }

    while(yr>=100)
    {
        printf("c");
        yr=yr-100;
    }

    while(yr>=50)
    {
        printf("l");
        yr=yr-50;
    }

    while(yr>=10)
    {
        printf("x");
        yr=yr-10;
    }

    while(yr>=5)
    {
        printf("v");
        yr=yr-5;
    }

    while(yr>=1)
    {
        printf("i");
        yr=yr-1;
    }
}