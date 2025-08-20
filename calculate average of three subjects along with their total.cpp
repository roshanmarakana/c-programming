#include<stdio.h>
#include<conio.h>
void main()
{
    float sub1,sub2,sub3,total,average;
    clrscr();
    printf("Enter marks of subject 1:");
    scanf("%f",&sub1);
    printf("Enter marks of subject 2:");
    scanf("%f",&sub2);
    printf("Enter marks of subject 3:");
    scanf("%f",&sub3);
    total = sub1 + sub2+ sub3;
    average = total /3;
    printf("Total Marks - %f + %f + %f = %f\n",sub1,sub2,sub3,total);
    printf("Average Marks = %f / 3 = %f\n",total ,average);
    getch();
    
}