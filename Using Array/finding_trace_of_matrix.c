#include<stdio.h>
#define MAXROW  10
#define MAXCOL  10
void main()
{
         int r,c,i,j,m[MAXROW][MAXCOL],sum;
         printf("enter number of row and colume:",r);
         scanf("%d",&r);
         for(i=0;i<r;i++)
         {
               for(j=0;j<r;j++)
               {
                    printf("enter element [%d,%d]:",i+1,j+1);
                    scanf("%d",&m[i][j]);
                }
        }
        sum=0;
        for(i=0;i<r;i++)
        {
              for(j=0;j<r ;j++)
              {
                    if(i==j)
                    sum+=m[i][j];
              }
              continue;
        }
       printf("trace of matrix: %d",sum);
}

