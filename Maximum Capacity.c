#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=(a*b);
    if(a<=8&&c<=500)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}