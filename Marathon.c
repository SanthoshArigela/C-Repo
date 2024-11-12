#include<stdio.h>
int main()
{
    int a,b,c,d,count=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(b>a)
    {
        count++;
    }
     if(c>a)
    {
        count++;
    }
     if(d>a)
     {
        count++;
     }
     printf("%d",count);
     return 0;
}