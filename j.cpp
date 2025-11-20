#include<stdio.h>
int main()
{
    int age[10];
    printf("Enter ages of 10 people:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&age[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(age[i]>=18)
        {
            printf("Person of age %d is eligible to vote.\n",age[i]);

        }
        else{
            printf("Person of age %d is not eligible to vote.\n",age[i]);
        }
        
    }
    return 0;
}