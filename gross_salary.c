#include<stdio.h>

void main()
{
    float bs,gs,ha,da;
    printf("Enter your basic salary: ");
    scanf("%f",&bs);
    da=bs*40/100;
    ha=bs*20/100;
    gs=bs+da+ha;
    printf("Your dearness allowance is: %f\n",da);
    printf("Your home allowance is: %f\n",ha);
    printf("Your gross salary is: %f",gs);
}