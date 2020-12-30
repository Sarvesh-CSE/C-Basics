#include<stdio.h>
void main()
{
     int i,x,num;
     printf("enter the number till which you want to find prime number",num);
     scanf("%d",&num);
     for(x=2;x<=num;x++)
     {
        for(i=2;i<=x;i++)
        {
           if(x%i==0)
           break;
        }
        if(i==x)
        printf("%d\n",x);
        else
        continue;
    }
