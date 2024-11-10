#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float x;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    x=(a+b+c+d+e)/5.0;
    if(x>=90)
    {
        printf("Grade A");
    }
    else if(x>=80&&x<90)
    {
        printf("Grade B");
    }
    else if (x>=70&&x<80)
    {
        printf("Grade C");
    }
    else if (x>=60&&x<70)
    {
        printf("Grade D");
    }
    else if (x>=40&&x<60)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}