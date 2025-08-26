#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=0;
    do
    {
     i=i+2;
     printf("%d\n",i);
        /* code */
    }while(i<n);
    return 0;
    
}