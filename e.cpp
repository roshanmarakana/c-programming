#include<stdio.h>
int main()
{
    int n,rev=0,r,tem;
    printf("Enter the number:\n");
    scanf("%d",&n);
    tem=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    };
    if (tem==rev)
    printf("The number is a palidrome.\n");
    else
    printf("The number is not a palidrome.\n");
    return 0;

}