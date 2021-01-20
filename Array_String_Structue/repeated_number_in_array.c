#include<stdio.h>
void main()
{
    int a[5],i=0,j=0;
    printf("enter 5 number");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
         {
            if(a[i]==a[j])
               printf("Repeated number is:%d\n",a[j]);
         }
    }
}

