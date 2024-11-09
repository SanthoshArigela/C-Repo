#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<3)
    {
        printf("LIGHT",a);
    }
    else if(a>=3&&a<7)
    {
        printf("MODERATE",a);
    }
    else
    {
        printf("HEAVY",a);
    }
    return 0;
}