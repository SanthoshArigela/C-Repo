#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a+c;
    if(b<=d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}