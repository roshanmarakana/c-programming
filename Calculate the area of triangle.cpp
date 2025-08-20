#include<stdio.h>
#include<conio.h>
void main()
{
    float a,h,l;
    clrscr();
    printf("Enter the lenght of base of triangle :");
    scanf("%f",&l);
    printf("Enter the height of triangle :");
    scanf("%f",&h);
    a=0.5 * l * h;
    printf("Area of the triangle is : 0.5 * %f * %f = %f\n",l,h,a);
    getch();
}