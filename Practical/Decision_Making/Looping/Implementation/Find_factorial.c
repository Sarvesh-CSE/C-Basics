#include<stdio.h>
 void main()
   {
   	int num,i,f=1;
   	printf("enter the number: \n");
   	scanf("%d", &num);
   	i=num;
   	while(i>0)
   	  {
   	  	f*=i;
   	  	i--;
   	  } 
   	 printf("factorial of number is :%d", num);
    } 
