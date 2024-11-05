#include<stdio.h>
#include<math.h>
int main()
{
    int a,x,y,z,m;
    scanf("%d%d%d",&x,&y,&m);
    z=pow(x,y);
    a=z%m;
    printf("%d",a);
    return 0;
}