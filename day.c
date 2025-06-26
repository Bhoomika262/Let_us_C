#include<stdio.h>

void main()
{
    int day=1,yr,i;
    printf("Enter the year: ");
    scanf("%d",&yr);
    for(i=1900;i<yr;i++)
    {
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            day=(day+2)%7;
        else
            day=(day+1)%7;
    }
    printf("The day on 01/01/%d is ",yr);
    switch(day)
    {
        case 0:printf("Sunday");
        break;
        case 1:printf("Monday");
        break;
        case 2:printf("Tuesday");
        break;
        case 3:printf("Wednesday");
        break;
        case 4:printf("Thursday");
        break;
        case 5:printf("Friday");
        break;
        case 6:printf("Saturday");
        break;
    }
}