#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int i=-1;
    while(i<=n)
    {
        i=i+2;
        sum=sum+i;
    };
     printf("Sum of first %d odd numbers is:%d\n",n,sum);
    return 0;
}