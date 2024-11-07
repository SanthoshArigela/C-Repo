#include<stdio.h>
int main()
{
    int m,h;
    scanf("%d",&m);
    h=m/60;
    m=m-h*60;
    printf("%d Hour(s) %d Minute(s)",h,m);
    return 0;
}