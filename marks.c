#include<stdio.h>

void marks(float,float,float,float*,float*);

void main()
{
    float a,b,c,avg,per;
    printf("Enter your marks in all three subjects(out of 60): ");
    scanf("%f %f %f",&a,&b,&c);
    marks(a,b,c,&avg,&per);
    printf("Average = %.2f\n", avg);
    printf("Percentage = %.2f\n", per);
}

void marks(float p,float q,float r,float *a,float *pe)
{
    float total=p+q+r;
    *a=total/3.0;
    *pe=(total/180.0)*100;
}