#include<stdio.h>
#include<conio.h>
void main()
{
    float n,g,d;
    clrscr();
    printf("Enter the gross sales:");
    scanf("%f",&g);
    d=0.1;
    n= g - (g * 0.1);
    printf("Net sales is : %f - (%f * 0.10) = %f\n",g,g,n);
    getch();
}