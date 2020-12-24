#include <stdio.h>
#include <conio.h>
void main ()
{
    int y;
   
    printf ("Enter the year : ");
    scanf("%d" , y);
    if (y%400==0)
    {
        printf("It is aleap year");
    }
    else if (y%100==0)
    {
        printf("It is not a leap year");
    }
    else if (y%4==0)
    {
        printf("It is not a leap year");
    }
    else
    printf("It is not a leap year");
    getch();
    
}