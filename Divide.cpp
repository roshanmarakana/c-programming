#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    c=a/b;
    printf("%d %d = %d",a,b,c);
    getch();
}