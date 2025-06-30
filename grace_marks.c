#include<stdio.h>

void main()
{
    int n,c;
    printf("Enter your obtained class: ");
    scanf("%d",&c);
    printf("Enter the number of subjects in which you've failed: ");
    scanf("%d",&n);
    switch(c)
    {
        case 1:
            if(n>3)
                printf("You are not granted any grace marks");
            else
                printf("You are granted a grace of 5 marks in each subject");
            break;

        case 2:
            if(n>2)
                printf("You are not granted any grace marks");
            else
                printf("You are granted a grace of 4 marks in each subject");
            break;

        case 3:
            if(n>1)
                printf("You are not granted any grace marks");
            else
                printf("You are granted a grace of 5 marks in each subject");
            break;

        default:
            printf("Enter valid class");
    }
}