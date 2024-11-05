#include<stdio.h>
int main()
{
    float r,a,p,pi=3.14;
    scanf("%f",&r);
    a=pi*r*r;
    p=2*pi*r;
    printf("%.2f\n%.2f",a,p);
    return 0;
}