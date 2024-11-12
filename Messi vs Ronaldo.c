#include<stdio.h>
int main()
{
    int a,b,x,y,d,z;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    d=((a*2)+(b*1));
    z=((x*2)+(y*1));
    if(d>z)
    {
        printf("Messi");
    }
    else if(d<z)
    {
        printf("Ronaldo");
    }
    else
    {
        printf("Equal");
    }
    return 0;
}