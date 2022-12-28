#include<stdio.h>
int main()
{
    int n,a=0,b=1,nxt=0;
    scanf("%d",&n);
    while(n>nxt)
    {
        nxt=a+b;
        a=b;
        b=nxt;
    }
    if(n-a<b-n)
    {
        printf("%d",a);
    }
    else if(n-a==b-n)
    {
        printf("%d %d",a,b);
    }
    else
    {
        printf("%d",b);
    }
    
}