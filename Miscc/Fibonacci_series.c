#include<stdio.h>
void fibonacci(void);
void main() 
     { 
   	fibonacci();
     } 
void fibonacci() 
{
   	int arr[50];
   	arr[0]=0;
   	arr[1]=1;
   	printf ("%d", arr[0]);
   	printf("\t");
   	printf ("%d", arr[1]);
   	printf("\t");
   	for(int i=0;i<=23;i++)
   	  { 
   	     arr[i+2]=arr[i]+arr[i+1];
   	  	printf ("%d", arr[i+2]);
   	     printf("\t");
   	  } 
}
   	  	
   	
