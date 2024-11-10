#include<stdio.h>
int main()
{
    float a,x,y,z;
    scanf("%f",&a);
    if(a<=10000)
    {
        x=a+(a*0.80)+(a*0.20);
        printf("%.2f",x);
    }
    else if(a>10000&&a<=20000)
    {
        y=a+(a*0.90)+(a*0.25);
        printf("%.2f",y);
    }
    else
    {
        z=a+(a*0.95)+(a*0.30);
        printf("%.2f",z);
    }
    return 0;
}