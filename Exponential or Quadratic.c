#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double a,b;
    scanf("%d",&n);
    a=(pow(2,n));
    b=(pow(n,2));
    if(a>b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;

}