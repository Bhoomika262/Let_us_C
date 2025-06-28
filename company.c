#include<stdio.h>

void main()
{
    int hr,i,ex;
    for(i=0;i<10;i++)
    {
        printf("\nEnter the total number of hours you have worked: ");
        scanf("%d",&hr);
        if(hr>40)
        {
            ex=hr-40;
            printf("You are paid %d rupees apart from your salary for overtime",12*ex);
        }
        else if(hr==40)
            printf("You'll get paid your regular salary....no overtime");
        else
            printf("You have still not completed required hours to get paid your salary");
    }
}