#include<stdio.h>
int main()
{
    int a,b,h;
    float A;
    scanf("%d%d%d",&a,&b,&h);
    A=(h*(a+b))/2.0;
    printf("%.4f",A);
    return 0;
}