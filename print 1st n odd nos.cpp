    #include<stdio.h>
    int main()
    {
        int i,n;
        printf("Enter the value of n:");
        scanf("%d",&n);
        i=-1;
        while(i<=n)
        {
            i=i+2;
            printf("%d\n",i);
        };
        return 0;
    }