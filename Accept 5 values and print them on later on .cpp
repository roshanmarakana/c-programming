#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The digits of the number are:\n");
    while(n>0)
    {
        int digits=n%10;
        printf("%d\n",digits);
        n=n/10;

    }
    return 0;
}