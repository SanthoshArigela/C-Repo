#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N); 
    int s=0;
    if (N % 3 == 0)
     {
        printf("Pling");
        s = 1;
    }
    if (N % 5 == 0) 
    {
        printf("Plang");
        s= 1;
    }
    if (N % 7 == 0) {
        printf("Plong");
        s= 1;
    }
    if (!s) 
    {
        printf("%d", N);
    }
    printf("\n"); 
    return 0;
}
