/* Find the simple interest if the principal amount is Rs. 2000, the time period is 2 years, 
and the rate is 10%. Also, calculate the total amount at the end of 1 year*/

#include <stdio.h>
int main(void)
{
    int p,n,A;
    float r,si;
    printf("Enter p:Rs.");
    scanf("%d",&p);
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%f",&r);
    printf("Simple Interest (si):");
    si=p*n*r/100;
    printf("%f \n",si);
    printf("Total Amount:");
    A=p+si;
    printf("%d",A);
    return 0;
}