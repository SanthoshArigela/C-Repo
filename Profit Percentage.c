#include<stdio.h>
int main()
{
    int cp,sp;
    float pp;
    scanf("%d%d",&cp,&sp);
    pp=(sp-cp)*100.0/cp;
    printf("%.2f",pp);
    return 0;
}