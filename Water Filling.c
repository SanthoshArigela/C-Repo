#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==1&&b==1&&c==1)
    {
        printf("Not now");
    }
    else if(a==0&&b==0&&c==1)
    {
        printf("Water filling time");
    }
    else if(a==1&&b==0&&c==0)
    {
        printf("Water filling time");
    }
    else if(a==0&&b==1&&c==0)
    {
        printf("Water filling time");
    }
    else if(a==1&&b==1&&c==0)
    {
        printf("Not now");
    }
    else if(a==1&&b==0&&c==1)
    {
        printf("Not now");
    }
    else if(a==0&&b==1&&c==1)
    {
        printf("Not now");
    }
    else 
    {
        printf("Water filling time");
    }
    return 0;
}