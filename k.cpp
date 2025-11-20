#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,length;
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    length=strlen(str);
    printf("The length of the string is:%d\n",length);
    printf("Upper case string is:\n");
    for(i=0;i<length;i++)
    {
        printf("%c",toupper(str[i]));
    }
     printf("\n lower case string is:");
    for(i=0;i<length;i++)
    {
        printf("%c",tolower(str[i]));
    }
    printf("\n toggle case string is :\n");
    for(i=0;i<length;i++)
    {
        if(isupper(str[i]))
        {
            printf("%c",tolower(str[i]));
        }
        else 
        if(islower(str[i]))
        {
            printf("%c",toupper(str[i]));
        }
        else{
            printf("%c",str[i]);
        }
    }
    return 0;
}