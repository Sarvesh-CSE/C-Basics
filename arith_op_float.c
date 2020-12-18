#include<stdio.h>
#include<conio.h>
int main()
{
    float num1, num2, res;
    printf("Enter First Number: ");
    scanf("%f", &num1);
    printf("Enter Second Number: ");
    scanf("%f", &num2);
    res = num1+num2;
    printf("\nAddition = %.2f", res);
    res = num1-num2;
    printf("\nSubtraction = %.2f", res);
    res = num1*num2;
    printf("\nMultiplication = %.2f", res);
    res = num1/num2;
    printf("\nDivision = %.2f", res);
    getch();
    return (0);
}
