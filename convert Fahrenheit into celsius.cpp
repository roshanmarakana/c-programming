#include<stdio.h>
#include<conio.h>
void main()
{
    float celsius,fahrenheit;
    clrscr();
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32 ) * 5 / 9;
    printf("Temperature in celsius: %f -32 * 5 / 9 = %f\n",fahrenheit,32,5/9,celsius);
    getch();
}