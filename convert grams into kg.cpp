#include<stdio.h>
#include<conio.h>
void main()
{
    float grams, kg;
    clrscr();
    printf("Enter the grams:");
    scanf("%f",&grams);
    kg=grams/1000;
    printf("The given grmas into kg is %f / 1000 = %f\n",grams,1000,kg);
    getch();
}