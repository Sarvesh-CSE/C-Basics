/*Interchange adjacent elements of an array*/
#include<stdio.h>
int main()
{
    int num[]={12, 4, 5, 11, 9, 21, 17, 19, 52, 34};
    int i, t;
      printf("\nThe given array is:\n");
       for(i=0; i<=9; i++)
       {
            printf("%d\t",num[i]);
       }
       for(i=0; i<=9; i=i+2)
       {
        t=num[i];
        num[i]=num[i+1];
        num[i+1]=t;
       }
        printf("\nThe interchanged array is:\n");
       for(i=0; i<=9; i++)
       {
        printf("%d\t",num[i]);
       }  
    return(0);
}

