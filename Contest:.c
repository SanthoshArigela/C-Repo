#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(((b*1)+(c*2))>=a)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
    return 0;
}