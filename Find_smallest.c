#include<stdio.h>
 void main()
   {
   	int arr[5],small=0,i;
   	printf("enter the elements:");
   	for(i=0;i<5;i++)
   	 {
   	 	scanf("%d",&arr[i]);
   	 } 
   	small=arr[0];
   	for(i=0;i<5;i++)
   	 {
   	 	if(arr[i]<small) 
   	 	small=arr[i];
   	 } 
   	printf("\nsmallest number:%d",small);
   	
    } 
	
