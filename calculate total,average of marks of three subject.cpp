#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,total,average;
    printf("Enter marks of three subject :\n");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    total=sub1+sub2+sub3;
    average=total/3;
    printf("Total marks = %d\n",total);
    printf("Average marks = %d\n",average);
      if(sub1<35 || sub2<35 || sub3<35)
                  printf("You are fail.\n");
                  else
                  {
                   if(average >= 70)
                   printf("You got distinction\n");
                      else 
                    {
                        if (average >= 60)
                         printf("You got first class\n");
                        else
                     {
                          if(average >= 50)
                           printf("You got second class.\n");
                        else
                      {
                        if(average >= 35)
                         printf("You got third class.\n");
                        else
                         printf("You are fail.\n");
                      }   
                     }
                    }
                   }  
    return 0;
}