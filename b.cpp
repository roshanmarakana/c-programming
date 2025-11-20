#include<stdio.h>
int main()
{
    int y;
    printf("Enter a year:\n");
    scanf("%d",&y);
    if(y%4==0)
    printf("%d is a Leap year\n",y);
    else
    printf("%d is not a Leap year\n",y);
    return 0;
}