#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x<150)
        printf("Person is Dwarf.\n");
    else if(x>150&&x<=165)
        printf("Person is average heighted.\n");
    else if(x>165&&x<=195)
        printf("Person is taller.\n");
    else
        printf("Abnormal height.");

    return 0;
}