#include<stdio.h>
int main()
{
    float a,b;
    
    printf("Enter two values:");
    scanf("%f%f",&a,&b);
    if(a == b)
      printf("All two values are equal.\n");
    else
     {
        if(a>b)
        printf("The largest value is: %f\n",a);
        else
        if(b>a)
        printf("The largest value is : %f\n",b);
        if(a<b)
        printf("The smallest value is: %f\n",a);
        else    
        if(b<a)
        printf("The smallest value is: %f\n",b);
    }
    

}