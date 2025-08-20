#include<stdio.h>
#include<conio.h>
void main()
{
    float a,pounds;
    clrscr();
    printf("Enter the dollers:");
    scanf("%f",&a);
    
    pounds = a/87 * 117;   
    printf("THis given dollers into pounds is %f / 87  * 117 = %f\n",a,87,117,pounds);
    getch();
}