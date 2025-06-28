#include<stdio.h>

void main()
{
    int n,positive=0,negative=0,zero=0;
    char c;
    printf("Enter a number: ");
    do
    {
        scanf("%d",&n);
        if(n>0)
            positive++;
        else if(n==0)
            zero++;
        else
            negative++;
        printf("Do you want to enter another number(y/n): ");
        scanf(" %c",&c);
    }
    while(c=='y'||c=='Y');
    printf("\nTotal positive numbers: %d", positive);
    printf("\nTotal negative numbers: %d", negative);
    printf("\nTotal zeros: %d", zero);
}