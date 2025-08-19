#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,Add,Subtract,Multiply,Divide;
    clrscr();
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    Add=a+b;
    printf("%d + %d = %d\n",a,b,Add);
    Subtract=a-b;
    printf("%d - %d = %d\n",a,b,Subtract);
    Multiply=a*b;
    printf("%d * %d = %d\n",a,b,Multiply);
    Divide=a/b;
    printf("%d / %d = %d\n",a,b,Divide);
    getch();
}