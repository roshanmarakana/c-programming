#include<stdio.h>
#include<string.h>
struct cricketer{
    char name[50];
    int age;
    int test;
    float avg;
};
int main()
{
    struct cricketer c[10],temp;
    int i,j;
    printf("Enter details of 10 cricketers:\n");
    for(i=0;i<10;i++)
    {
        printf("Cricketer %d:\n",i+1);
        printf("Name: ");
        fflush(stdin);
       fgets(c[i].name,sizeof(c[i].name),stdin);
       c[i].name[strcspn(c[i].name,"\n")]='0';
        printf("Age: ");
        fflush(stdin);
        scanf("%d",&c[i].age);
        printf("Number of Test Matches Played: ");
        fflush(stdin);
        scanf("%d",&c[i].test);
        printf("Batting Average: ");
        scanf("%f",&c[i].avg);
        fflush(stdin);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(c[i].avg>c[j].avg)
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\n Cricketers sorted by Batting Average (Ascending Order):\n");
    for(i=0;i<10;i++)
    {
        printf("Cricketer %d:\n",i+1);
        printf("Name: %s\n",c[i].name);
        printf("Age: %d\n",c[i].age);
        printf("Number of Test Matches Played: %d\n",c[i].test);
        printf("Batting Average: %.2f\n",c[i].avg);
    }
}