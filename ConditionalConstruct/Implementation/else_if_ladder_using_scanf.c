/*Implementing Else If ladder using scanf*/

#include <stdio.h>
void main()
{
    int number;
    printf("Enter any number between 1 to 100 and I will tell you in which range it will lie. \n");
    scanf("%d",&number);
    printf("\n\n");

    if(number>90)
        printf("Your inputed number is in the range of 91-100");
    else if(number>80)
        printf("Your inputed number is in the range of 81-90");
    else if(number>70)
        printf("Your inputed number is in the range of 71-80");
    else if(number>60)
        printf("Your inputed number is in the range of 61-70");
    else if(number>50)
        printf("Your inputed number is in the range of 51-60");
    else if(number>40)
        printf("Your inputed number is in the range of 41-50");
    else if(number>30)
        printf("Your inputed number is in the range of 31-40");
    else if(number>20)
        printf("Your inputed number is in the range of 21-30");
    else if(number>10)
        printf("Your inputed number is in the range of 11-20");
    else 
        printf("Your inputed number is in the range of 1-10");                           
           
}
