#include<stdio.h>
#include<conio.h>
void main()
{
    int a,l,b,p;
    clrscr();
    printf("Enter the lenght of the rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle:");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("Area of the rectangle is : %d * %d = %d\n",l,b,a);
    printf("Perimeter of the rectangle is : 2 * (%d + %d) = %d\n",l,b,p);
    getch();


}