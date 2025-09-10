#include<stdio.h>
int main()
{
    int n;
    printf("Enter 10 numbers:");
    int arr[10];
    for (int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("The 4th,7th,and 9th values are :\n");
    printf("%d\n",arr[3]);
    printf("%d\n",arr[6]);
    printf("%d\n",arr[8]);
    return 0;
}