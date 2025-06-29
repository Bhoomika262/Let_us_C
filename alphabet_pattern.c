#include<stdio.h>

void main()
{
    int i,j,n;
    char c;
    printf("Enter the number of lines you want in your pattern: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c='A';
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=(n-i))
            {
                printf("%c",c);
                c++;
            }
            else if(j >= n - i && j < n + i)
            {
                printf(" ");
            }
            else if(j>=n+i)
            {
                c--;
                printf("%c",c);
            }
        }
        printf("\n");
    }
}