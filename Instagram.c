#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=b*10;
    if(c<a)
    {
    printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}