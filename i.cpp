#include<stdio.h>
int main()
{
    int values[5];
    printf("Enter 5 values:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&values[i]);
    }
    printf("Even elements of array are:\n");
    for(int i=0;i<5;i++)
    {
        if (values[i]%2==0)
        {
            printf("%d\t",values[i]);
        }
    }
    return 0;
}