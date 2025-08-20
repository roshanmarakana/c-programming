#include<stdio.h>
#include<conio.h>
void main()
{
    float n,g,a,d;
    clrscr();
    printf("Enter the gross salary: ");
    scanf("%f",&g);
    a= g * 0.1;
    d= g * 0.03;
    n= g + a - d;
    printf("Allowance is : %f * 0.1 = %f\n",g,a);
    printf("Deduction is : %f * 0.03 = %f\n",g,d);
    printf("Net salary is : %f + %f - %f = %f\n",g,a,d,n);
    getch();
    
}