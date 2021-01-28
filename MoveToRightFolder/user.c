#include<stdio.h>
#include<conio.h>
void main ()
{
    int num, z=0, pos=0, neg=0;
    char ch;
   do
   {
       printf("Enter the number of your choice");
       scanf("%d \n", &num);
       if (num==0)
       {
           z++;
       }
       else if (num>0)
       {
           pos++;
       }
       else
       {
           neg++;
       }
       printf("Do you want to add a number? Type y for yes and n for no ");
       scanf("%c \n", &ch);
   } while (ch=='y'||ch=='Y');
    printf("\n Number of positive integers %d", pos);
    printf("\n Number of negative integers %d", neg);
    printf("\n Number of Zero %d", z);
    getch();
}
