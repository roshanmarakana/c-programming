#include<stdio.h>
int main()
{
   FILE *fptr;
   int roll;
   char blood[50] , name[50] , city[50];
   char choice;
   fptr=fopen("student.dat","a");
   if(fptr==NULL)
   {
    printf("Error opening file.\n");
    return 1;
   } 
   do
   {
    printf("Enter student roll number:\n ");
    scanf("%d",&roll);
    printf("Enter student name:\n ");
    scanf(" %[^\n]",name);
    printf("Enter student city:\n ");
    scanf(" %s",city);
    printf("Enter student blood group:\n ");
    scanf(" %s",blood);
    fprintf(fptr,"%d %s %s %s\n",roll,name,city,blood);
    printf("Do you want to add another record? (y/n):\n ");
    scanf(" %c",&choice);
   }while(choice=='y'|| choice=='Y');
   fclose(fptr);
   printf("Records saved successfully.\n");
   return 0;
}