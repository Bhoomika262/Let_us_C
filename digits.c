#include<stdio.h>

void main()
{
    int n,fd,ld;
    printf("Enter a number: ");
    scanf("%d",&n);
    ld=n%10;
    fd=n;
    while(fd>=10)
    {
        fd=fd/10;
    }
    printf("Sum of the first digit and last digit of %d is: %d",n,fd+ld);
}