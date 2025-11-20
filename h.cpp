#include<stdio.h>
int main()
    {
        int n,flag=0,i;
        printf("Enter the number:\n");
        scanf("%d",&n);
        if(n<=1)
        {
            printf("%d is not a prime number.\n",n);
            return 0;
        }
        else{
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            printf("%d is a prime number.\n",n);
        }
        else
        {
            printf("%d is not a prime number.\n",n);
        }
        return 0;
    }
