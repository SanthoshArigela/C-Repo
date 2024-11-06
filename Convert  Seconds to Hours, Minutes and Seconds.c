#include<stdio.h>
int main()
{
    int h,m,s;
    scanf("%d",&s);
    h=s/3600;
    s=s-h*3600;
    m=s/60;
    s=s-60*m;
    printf("H:M:S-%d:%d:%d",h,m,s);
    return 0;
}