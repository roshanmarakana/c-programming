#include<stdio.h>
#include<conio.h>
void main()
{
    float grams, kg;
    clrscr();
    printf("Enter the kg:");
    scanf("%f",&kg);
    grams=kg*1000;
    printf("The given grmas into kg is %f * 1000 = %f\n",kg,1000,grams);
    getch();
}