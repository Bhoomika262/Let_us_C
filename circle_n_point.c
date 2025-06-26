#include<stdio.h>
#include<math.h>

void main()
{
    int x1,x2,y1,y2,r;
    printf("Enter the coordinates of centre of a circle: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    printf("Now, enter the coordinated of any point: ");
    scanf("%d %d",&x2,&y2);
    if((pow((x2-x1),2)+pow((y2-y1),2))<(r*r))
        printf("The point (%d,%d) lies inside the circle",x2,y2);
    else if((pow((x2-x1),2)+pow((y2-y1),2))==(r*r))
        printf("The point (%d,%d) lies on the circle",x2,y2);
    else 
        printf("The point (%d,%d) lies outside the circle",x2,y2);  
}