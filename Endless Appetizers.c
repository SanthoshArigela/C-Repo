#include <stdio.h>
int main()
 {
    int X, Y, R,a,b,c;
    scanf("%d %d %d", &X, &Y, &R);
    a= R / 30;
    b = X + a;
    c= (b + Y - 1) / Y;
    printf("%d\n", c);
    return 0;
}
