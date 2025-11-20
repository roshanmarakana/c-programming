#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100],sorted[100];
    int i,j;
    printf("Enter a string:\n");
    gets(str);
    strcpy(sorted,str);
    for(i=0;sorted[i]!='\0';i++)
    {
        for(j=i+1;sorted[j]!='\0';j++)
        {
            if((sorted[i])>(sorted[j]))
            {
                char temp=sorted[i];
                sorted[i]=sorted[j];
                sorted[j]=temp;
            }
        }
    }
    FILE *fptr;
    fptr=fopen("25bcp238.txt","a");
    if(fptr==NULL)
    {
        printf("Error opening file.\n");
        return 0;
    }
    fprintf(fptr,"Original string:%s\n",str);
    fprintf(fptr,"Sorted string:%s\n",sorted);
    fclose(fptr);
    printf("\nData written to file successfully.\n");
    return 0;
}