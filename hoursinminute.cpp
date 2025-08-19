#include<stdio.h>
#include<conio.h>
void main()
{
    int a,Minutes;
    clrscr();
    printf("Enter the hours:");
    scanf("%d",&a);
    Minutes=a*60;
    printf("This given hours into miutes is %d * %d = %d\n",a,60,Minutes);
    getch();
}