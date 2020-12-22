#include <stdio.h>

int main(void) {
int i;
for(i=1;i<6;i++)
{
if(i==1)
printf("BBB Y Y EEEE\n");
if(i==2)
printf("B B Y Y E\n");
if(i==3 || i==5)
printf("BBB Y EEEE\n");
if(i==4)
printf("B B Y E\n");
}
return 0;
}