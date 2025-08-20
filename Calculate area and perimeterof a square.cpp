#include<stdio.h>
#include<conio.h>
void main()
{
    int a,p,l;
    clrscr();
    printf("Enter the side lenght of the square: ");
    scanf("%d",&l);
    a = l * l;
    p = 4 * l;
    printf("Area of the square is : %d * %d = %d\n",l,l,a);
    printf("perimeter of the square is : 4 * %d = %d\n",l,p);
    getch();


}