#include<stdio.h>
int main()
{
    int x[5],i,j,t;
    printf("Enter 5 number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);

    }
    printf("unsorted arrays:");
    for(i=0;i<=3;i++)
    { printf("%d",x[i]);
       for(i=0;i<=3;i++)
        { for(j=i+1;j<=4;j++)
           {
            if(x[i]>x[j])
         {
            t=x[i];
            x[i]=x[j];
            x[j]=t;
        }
    }
}
    }
    printf("sorted array:");
    for(i=0;i<=4;i++)
    {
    printf("%d",x[i]);
    }
    return 0;
}