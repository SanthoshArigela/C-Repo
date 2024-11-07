#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=n*4;
    if(a<=1000)
    {
        printf("YES",a);
    }
    else
    {
        printf("NO",a);
    }
    return 0;
}