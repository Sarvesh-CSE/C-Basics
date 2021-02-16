#include<stdio.h>
void main()
{
    int num, count = 1,i, rem, sum;
    printf("enter 3 digit number i:");           //till which you want to find Armstrong number
    scanf("%d",&i);
    while(count <= i)
    {
        num = count;
        sum = 0;
        while(num)
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        if(count == sum)
        {
            printf("%d is a Armstrong number\n", count);
        }
        count++;
    }
}
