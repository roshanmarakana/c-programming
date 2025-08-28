#include<stdio.h>
int main()
{

    int i,a,b,add,m;
    printf("Enter choice:");
    scanf("%d",&i);
    switch(i)
    {
    case addition:{printf("Enter two number:");
             scanf("%d%d",&a,&b);
             add = a + b;
             printf("Addition is %d + %d = %d",a,b,add);
             break;
             }
    case multiply:{printf("Enter two number:");
                  scanf("%d%d",&a,&b);
                  m = a * b;
                  printf("Multiply is %d * %d = %d",a,b,m);}
                  break;
    case odd or even:{printf("Enter a number:");
                     scanf("%d",&a);
                     if(a%2==0)
                     {
                       printf("The given number is even.");
                     }
                     else
                     if(a%2!=0)
                     {
                      printf("The given number is odd.");
                     }
                     }
                    break;
    case divisible:{printf("Enter a number:");
                  scanf("%d",&a);
                  if(a%5==0)
                  {
                  printf("The given number is divisible by 5.");
                  }
                  else
                  if(a%5!=0)
                  {
                  printf("The given number is not divisible by 5.");
                  }
                  }
                  break;
    case prime:{printf("Enter a number:");
              scanf("%d",&a);



              }
             break;
    default:printf("Invalid Choice.");
    }
    return 0;
}
