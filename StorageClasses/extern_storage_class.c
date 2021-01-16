#include <stdio.h>  
int a = 50;   
int main()  
{  
extern int a; // variable a is defined globally, the memory will not be allocated to a  
printf("%d",a);  
}