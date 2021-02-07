#include<stdio.h>
int main()
{
    int i,l=1189,b=841;
    printf("\nThe dimensions of sheet A0 are %dmm*%dmm.",l,b);
    for(i=1;i<9;i++)
    {
        if(l>b)
           l=l/2;
        else
           b=b/2;
        if(l>b)
           printf("\nThe dimensions of sheet A%d are %dmm*%dmm.",i,l,b);
        else
           printf("\nThe dimensions of sheet A%d are %dmm*%dmm.",i,b,l);
    }
    return(0);
}
