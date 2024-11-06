#include<stdio.h>
#include<math.h>
int main ()
{
    int p,t,r;
    double ci,a;
    scanf("%d%d%d",&p,&r,&t);
    ci=p*pow(1+r/100.0,t);
    a=ci-p;
    printf("%.2lf",a);
    return 0;
}