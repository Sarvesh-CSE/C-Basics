#include<stdio.h> 
void main()
{
   int ram,shyam,ajay;
   printf("enter the ages of ram, shyam, ajay");
   scanf("%d%d%d",&ram,&shyam,&ajay);
   if(ram<shyam && ram<ajay)
      printf("ram is youngest");
   if(shyam<ram && shyam<ajay)
      printf("shyam is youngest");
   if(ajay<ram && ajay<shyam)
      printf("ajay is youngest");
}
