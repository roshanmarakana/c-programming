#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    if (a == b && b == c)
        printf("All numbers are equal.\n");
    else
       {
        if (a >= b && a >= c)
        printf("%f is largest.\n",a);
        else
        if (b >= a && b >= c)
        printf("%f is largest.\n",b);
        else
        if (c >= a && c >= b)
        printf("%f is largest.\n",c);

        if (a <= b && a <= c)
        printf("%f is smallest.\n",a);
        else
        if (b <= a && b <= c)
        printf("%f is smallest.\n",b);
        else
        if (c <= a && c <= b)
        printf("%f is smallest.\n",c);
       }
}
