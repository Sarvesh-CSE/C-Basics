// C program to illustrate the concept of returning pointer from a function 
#include <stdio.h> 
  
int* fun()  // Function that returns pointer 
{ 
    static int a = 10;      // Declare a static integer 
    return &a; 
} 
  
int main() 
{ 
    int* p; 
    p = fun(); 
    printf("%p\n", p);      // Print Address 
    printf("%d\n", *p);     // Print value at the above address 
    return 0; 
} 