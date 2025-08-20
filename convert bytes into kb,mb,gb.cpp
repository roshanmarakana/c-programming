#include<stdio.h>
#include<conio.h>
void main()
{
    float bytes,kb,mb,gb;
    clrscr():
    printf("Enter the bytes:");
    scanf("%f",&bytes);
    kb= bytes/1024;
    mb=kb/1024;
    gb=mb/1024;
    printf("The value in kb is %f / 1024 = %f\n",bytes,1024,kb);
    printf("The vlaue in mb is %f / 1024 = %f\n",kb,1024,mb);
    printf("The value in gb is %f / 1024 = %f\n",mb,1024,gb);
    getch();
}
