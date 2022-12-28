#include<stdio.h>
int main()
{
    int i,j,n,c;
    scanf("%d",&n);
    if(n>=3)
    {
    c=1;
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            c++;
        }
        else
        {
            c--;
        }
        printf("
");
    }
    return 0;
    }
    else
    {
        printf("The pattern is not possible");
    }
}