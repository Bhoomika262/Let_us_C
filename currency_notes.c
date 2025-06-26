#include<stdio.h>

void main()
{
    int n,h,f,t;
    printf("Enter the amount you want to withdraw(below 1000): ");
    scanf("%d",&n);
    h=n/100;
    f=(n%100)/50;
    t=(n%50)/10;
    printf("100 rupee notes -> %d\n",h);
    printf("50 rupee notes -> %d\n",f);
    printf("10 rupee notes -> %d\n",t);
}