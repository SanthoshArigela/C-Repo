#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0 && a>4)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}