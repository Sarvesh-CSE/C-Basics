#include <stdio.h>

#define MAXROW		10
#define MAXCOL		10

int main()
{
    int matrix[MAXROW][MAXCOL];
    int i,j,r,c;
    int sum;
	
    printf("Enter number of Rows:",r);
    scanf("%d",&r);
    printf("Enter number of columns:",c);
    scanf("%d",&c);
    if(r==c)
    {
	     printf("\nEnter matrix elements :\n");
	     for(i=0;i<r;i++)
	     {
		       for(j=0;j<c;j++)
	        {
		          printf("Enter element [%d,%d] : ",i+1,j+1);
			  scanf("%d",&matrix[i][j]);
	        }
             }
	     sum=0;
	     for(i=0;i<r;i++)
	     {
	         for(j=0;j<c;j++)
		        {
			          if(i==j)
                         sum+=matrix[i][j];
             continue;
	         }
	     }
            printf("trace=%d",sum);
    }
    else
    printf("trace is only defined for square matrix");	
}
    
