#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b>=(a*0.75))
    {
        printf("ELIGIBLE");
    }
    else
    {
        printf("NOT ELIGIBLE");
    }
    return 0;
}