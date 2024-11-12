#include<stdio.h>
int main()
{
    int a,b;
    float h;
    scanf("%d%d",&a,&b);
    h=(a*0.9);
    if(h>b)
    {
        printf("DINING");
    }
    else if (h<b)
    {
        printf("ONLINE");
    }
    else
    {
        printf("EITHER");
    }
    return 0;
}