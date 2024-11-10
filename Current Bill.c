#include <stdio.h>

int main() 
{
    int units;
    float bill = 0.0, surcharge = 0.0;
    scanf("%d", &units);
    if (units <= 199) {
        bill = units * 1.20;
    }
    else if (units >= 200 && units < 400) {
        bill = units * 1.50;
    }
    else if (units >= 400 && units < 600) {
        bill = units * 1.80;
    }
    else if (units >= 600) 
    {
        bill = units * 2.00;
    } 
    if (bill > 400)
     {
        surcharge = bill * 0.15;  
        }
     else 
    {
        surcharge = 100.0; 
    }
    bill = bill + surcharge; 
    printf(" %.2f\n", bill);
   return 0;
}
