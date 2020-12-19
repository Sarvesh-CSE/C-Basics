#include<stdio.h>
Int main()
{
   Int m1,m2,m3,m4,m5,per;
   Print ("enter marks in five subjects");
   Scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

   Per=(m1+m2+m3+m4+m5)/500*100;
 
   If(per>=60)
       Print ("first division\n");
   If((per>=50)&&(per<50))
       Printf("second division\n");
   If((per>=40)&&(per<50))
       Printf("third division\n");
   If(per<40)
       Printf("fail\n");
   return 0;
}
