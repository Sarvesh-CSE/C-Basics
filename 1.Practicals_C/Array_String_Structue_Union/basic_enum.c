// An example program to demonstrate working 
// of enum in C 
#include<stdio.h> 
  
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}; 
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec}; 
enum State {Working = 1, Failed = 0, Freezed = 0}; 
  
int main() 
{ 
    printf("Usecase1 Demonstration: \n");
    enum week day; 
    day = Wed; 
    printf("The day number stored in day is %d \n",day); 
    printf(" ------------------------------------------ \n");
    
    printf("Usecase2 Demonstration: \n");
    for (int i=Jan; i<=Dec; i++)       
        printf("%d ", i); 
    printf(" \n ------------------------------------------ \n");
    
    printf("Usecase3 Demonstration: \n");
    printf("%d, %d, %d", Working, Failed, Freezed);
} 