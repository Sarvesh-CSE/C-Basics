#include<stdio.h>
void main()
{
    int i;
    int p,a;
    printf("\nenter side of square:",i);
    scanf("%d",&i);
    area_perimeter(i,&a,&p);                    //passing address of variables a and b through called function.
    printf("\narea:%d",a);
    printf("\nperimeter:%d",p);
}
int area_perimeter(int i,int *a,int *p)         
{
         *a=i*i;
         *p=4*i;
}
