#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,n,i;
    clrscr();
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the number of years:");
    scanf("%f",&n);
    i=p*r*n/100;
    printf("The interest is %f * %f * %f / 100 = %f\n ",p,r,n,100,i);
    getch();
    
}