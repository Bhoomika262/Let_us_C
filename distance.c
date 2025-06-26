#include<stdio.h>

void main()
{
    float km,m,inch,ft,cm;
    printf("Enter the distance in km: ");
    scanf("%f",&km);
    m=km*1000;
    cm=km*100000;
    ft=km*3280.84;
    inch=km*39370.1;
    printf("In meters-> distance= %f\n",m);
    printf("In centimeters-> distance= %f\n",cm);
    printf("In inches-> distance= %f \n",inch);
    printf("In feet-> distance= %f \n",ft);
}