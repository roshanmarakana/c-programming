#include<stdio.h>
int main()
{
    float n,g,a,d;
    printf("Enter the gross salary:");
    scanf("%f",&g);

    if(g > 10000)
    {
        a=0.1*g;
        d=0.03*g;
    }
    else
        if(g > 5000)
    {
        a=0.07*g;
        d=0.02*g;
    }
    n=g+a-d;
    printf("The net salary is %f\n",n);

}
