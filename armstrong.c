#include<stdio.h>

void main()
{
    int n,i,a,sum,b;
    printf("----Armstrong numbers----\n");
    for(i=0;i<500;i++)
    {
        sum=0;
        b=i;
        while(b!=0)
        {
            a=b%10;
            sum=sum+(a*a*a);
            b=b/10;
        }
        if(i==sum)
            printf("%d\n",i);
    }
}