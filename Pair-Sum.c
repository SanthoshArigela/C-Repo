#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=(a%100);
    c=(a/10);
    d=b+c;
    printf("%d",d);
    return 0;
}