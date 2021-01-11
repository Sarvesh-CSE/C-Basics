#include<stdio.h>
void TOH(int n,char x,char y,char z)                      //function definition
{
        if(n>0)
    {
        TOH(n-1,x,z,y);
        printf("move from %c to %c\n",x,z);
        TOH(n-1,y,x,z);                                   //recursion
    }
}
void main()
{
        int n;
        printf("enter the number of disks:",n);
        scanf("%d",&n);
        TOH(n,'A','B','C');                              //function call
}
