#include<stdio.h>
int main()
{
    char str[100],rev[100];
    int length=0,i;
    printf("Enter a string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    for(i=0;i<length;i++)
    {
        rev[i]=str[length-1-i];
    }
    rev[length]='\0';
    printf("The reversed string is:%s\n",rev);
    return 0;
}