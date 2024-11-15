#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=(n%3);
    if(a==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;    
}