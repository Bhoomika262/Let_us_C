#include<stdio.h>

void main()
{
    int n,sum=0,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=n;
    while(n!=0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("Sum of digits of %d is: %d",a,sum);
}