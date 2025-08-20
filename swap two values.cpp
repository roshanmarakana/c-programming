#include<stdio.h>
#include<conio.h>
void main()
{
    int a ,b, temp;
    clrscr();
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Before swaping: a= %d and b= %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swaping: a= %d and b= %d\n",a,b);
    getch();
}