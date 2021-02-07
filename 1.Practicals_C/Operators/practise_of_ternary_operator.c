#include<stdio.h>
int main()
{
      int a,b;
      printf("enter values of a and b");
      scanf("%d %d",&a,&b);
      (a%b==0)?(printf("%d is multiple of %d",a,b)):(printf("%d is not multiple of %d",a,b));
      return(0);
}
