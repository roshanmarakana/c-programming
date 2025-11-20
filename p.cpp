#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char ch;
    fptr=fopen("mycode.dat","w");
    if (fptr==NULL)
    {
        printf("Error opening file.\n");
        return 0;
    }
    printf("Enter your C program below and use $ sign to end input.\n");
    while(ch!='$')
    {
        fputs(ch,fptr);
         ch=fgetc(stdin);
    }
    fclose(fptr);
    int result=system("g++ mucode.cpp -o mycode.exe");
    if(result!=0)
    {
        printf("Compilation failed.\n");
        return 0;
    }
    printf("Compilation successful. Executing the program:\n");
    system("mycode.exe");
    return 0;

}