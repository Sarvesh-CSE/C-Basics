#include<stdio.h>
int main()
{
    int i,c=0;
    char str[10],*p;
    printf("enter a string\n");
    gets(str);
    p=str;    //&str[0]
    while(*p != '\0')
    {
         c++;
         p++;
     }
    printf("length=%d",c);
    return 0;
}
    
/* Here using while loop we have iterated over characters of string from p=str(which assigned to the base address of string) to until '\0'(null character is encountered in each iteration value of p is increase by 1.
When the loop end the length of string will be stored in the p variable.*/    
    
