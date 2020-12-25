#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, res;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    res = num1+num2;
    printf("\nAddition = %d", res);
    res = num1-num2;
    printf("\nSubtraction = %d", res);
    res = num1*num2;
    printf("\nMultiplication = %d", res);
    res = num1/num2;
    printf("\nDivision = %d", res);
    getch();
    return (1);
}