#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float per;
    printf("enter marks in five subjects: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    per=(m1+m2+m3+m4+m5)*100/500;
     
    if(per>=60)
          printf("first division\n");
     
    else if(per>=50)
          printf("second division\n");
    
    else if(per>=40)
          printf("third division\n");
    else
          printf("fail");
   return 0;
}
