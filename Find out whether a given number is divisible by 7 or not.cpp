#include<stdio.h>
int main()
{
    int a,divisible;
    printf("Enter a nuber:");
    scanf("%d",&a);
    divisible=a%7;
    if(divisible==0)
       printf("The number is divisible by 7.\n");
    else
         printf("The number is not divisible by 7.\n");
         return 0;
}