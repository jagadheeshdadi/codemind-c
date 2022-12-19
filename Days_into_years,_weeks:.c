#include<stdio.h>
int main()
{
    int yr,days,weeks;
    scanf("%d",&days);
    yr=days/365;
    weeks=(days%365)/7;
    printf("%d
%d",yr,weeks);
}
