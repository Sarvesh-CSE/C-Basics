#include<stdio.h>
int main()
{
    int arr[5];
    for(int i = 0; i< 5; i++)
    {
        printf("Enter the %d element = ", i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i< 5; i++)
    {
        printf("The given array is = %d", arr[i]);
        printf("\t");
    }
    for(int i = 4; i >= 0; i--)
    {
        printf("\nThe reversed array is = %d", arr[i]);
        printf("\t");
    }
}