#include<stdio.h>

void main()
{
    int num,n,rev=0,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    printf("Reverse of %d is %d",num,rev);
    if(num==rev)
        printf("\n%d and %d are equal",num,rev);
    else
        printf("\n%d and %d are not equal",num,rev);
}