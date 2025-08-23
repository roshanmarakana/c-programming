#include<stdio.h>
int main()
{
    float n,g,d;
    printf("Enter the gross sales:");
    scanf("%f",&g);
    if(g>20000)
        d=.15*g;
        else
          if(g>10000)
            d=.1*g;
            else
                d=.05*g;
    n = g - d;
    printf("The net sales is : %f\n",n);
    return 0;
    
}