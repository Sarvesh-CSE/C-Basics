/*Implementing Else If ladder using scanf*/

#include <stdio.h>
void main()
{
    int number;
    printf("Enter any number between 1 to 100 and I will tell you in which range it will lie. \n");
    scanf("%d",&number);
    printf("\n\n");

    if(number>76)
        printf("Your inputed number is in the range of 76-100");
    else if(number>51)
        printf("Your inputed number is in the range of 51-75");
    else if(number>26)
        printf("Your inputed number is in the range of 26-50");
    else 
        printf("Your inputed number is in the range of 1-25");  
}
