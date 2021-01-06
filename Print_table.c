#include<stdio.h> 
 void main() 
 { 
 	int num, i, tab; 
 	printf("Enter the number: "); 
 	scanf("%d", &num); 
 	printf("\nTable of %d is:\n", num);
 	 for(i=1; i<=10; i++) 
 	 { 
 	   tab = num*i; 
 	   printf("%d * %2d = %2d\n", num, i,tab); 
 	 }
 
} 
