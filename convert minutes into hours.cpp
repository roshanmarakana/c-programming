#include<stdio.h>
#include<conio.h>
void main()
{
    int a,Hours;
    clrscr();
    printf("Enter the minutes:");
    scanf("%d",&a);
    Hours = a/60;
    printf("This given minutes into hours is %d / %d = %d\n",a,60,Hours);
    getch();
}