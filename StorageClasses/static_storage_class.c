#include<stdio.h>  
void sum()  
{  
static int a = 10;  
static int b = 24;   
printf("%d %d \n",a,b);  
a++;   
b++;  
}  
void main()  
{  
int i;  
for(i = 0; i< 3; i++)  
{  
sum(); // The static variables holds their value between multiple function calls.    
}  
} 