#include<stdio.h>
#include<conio.h>
void main()
{
    float r,a;
    clrscr();
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    a = 3.14 * r * r ;
    printf("Area of the circle is : 3.14 * %f * %f = %f\n",r,r,a);
    getch();

}