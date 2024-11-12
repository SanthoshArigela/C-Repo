#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    c=(a+b);
    d=(a*b);
    e=c+d;
    if(e==111)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}