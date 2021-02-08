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
    
    
    
