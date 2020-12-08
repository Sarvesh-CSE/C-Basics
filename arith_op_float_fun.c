#include<stdio.h>
#include<conio.h>
float Add(float, float);
float Sub(float, float);
float Mul(float, float);
float Div(float, float);
int main()
{
    float num1, num2, res;
    printf("Enter any two number: ");
    scanf("%f%f", &num1, &num2);
    res = Add(num1, num2);
    printf("\nAddition = %.2f", res);
    res = Sub(num1, num2);
    printf("\nSubtraction = %.2f", res);
    res = Mul(num1, num2);
    printf("\nMultiplication = %.2f", res);
    res = Div(num1, num2);
    printf("\nDivision = %.2f", res);
    getch();
    return (1);
}
float Add(float a, float b)
{
    return a+b;
}
float Sub(float a, float b)
{
    return a-b;
}
float Mul(float a, float b)
{
    return a*b;
}
float Div(float a, float b)
{
    return a/b;
}