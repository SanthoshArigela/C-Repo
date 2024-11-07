#include<stdio.h>
int main()
{
    float x,y,z,a,b;
    scanf("%f%f%f",&x,&y,&z);
    a=x*0.12;
    b=x+y+z+a;
    printf("%.2f\n%.2f",a,b);
    return 0;
}