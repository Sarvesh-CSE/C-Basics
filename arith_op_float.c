#include<stdio.h>
#include<conio.h>
int main()
{
    float num1, num2, res;
    printf("Enter any two number: ");
    scanf("%f%f", &num1, &num2);
    res = num1+num2;
    printf("\nAddition = %.2f", res);
    res = num1-num2;
    printf("\nSubtraction = %.2f", res);
    res = num1*num2;
    printf("\nMultiplication = %.2f", res);
    res = num1/num2;
    printf("\nDivision = %.2f", res);
    getch();
    return (1);
}