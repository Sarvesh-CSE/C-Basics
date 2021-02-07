#include<stdio.h>
int main()
{
     int a;
     printf("\nenter any positive number");
     scanf("%d",&a);
     if(a>0 && (a&(a-1))==0)
     {
         printf("%d can be represented in power of 2",a);
     }
     else
         printf("%d can not be represented in power of 2",a);
}
