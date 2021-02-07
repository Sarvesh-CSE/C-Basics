#include <stdio.h>
int main()
{
    float cp, sp, p;
    printf("\nEnter cost price and selling price:");
    scanf("%f %f", &cp, &sp);
    p = sp - cp;
    if (p > 0)
    printf("profit: %f \n", p);
    else if (p < 0)
    printf("loss: %f \n", -p);
    else 
    printf("No profit, No loss\n");
    return 0;
}