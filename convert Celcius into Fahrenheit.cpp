#include<stdio.h>
#include<conio.h>
void main()
{
    float celsius,fahrenheit;
    clrscr();
    printf("Enter temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9/5) + 32;
    printf("Temperature in farenheit: %f * 9 / 5 + 32 = %f\n",celsius,9/5,32,fahrenheit);
    getch();
}