#include<stdio.h>
#include<conio.h>
void main()
{
    int a,Dollers;
    clrscr();
    printf("Enter the Rs:");
    scanf("%d",&a);
    Dollers=a/75;
    printf("This given dollers into Rs is %d / %d = %d\n",a,75,Dollers);
    getch();

}