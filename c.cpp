#include<stdio.h>
int main()
{
    int i,sum=0;
    for(int i=1;i<100;i++)
    {
        if(i%3==0 && i%13==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("Sum of all numbers between 1 to 100 divisible by 3 and 13 is %d\n",sum);
}