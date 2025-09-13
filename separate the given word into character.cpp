#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[100];
    printf("enter the word:");
    scanf("%s",name);
    printf("the characters in the word are:\n");
    for(i=0;i<strlen(name);i++)
    {
        printf("%c\n",name[i]);

    }
    
    return 0;
}