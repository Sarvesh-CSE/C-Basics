#include <stdio.h>
int main()
{
    int y;
    int x = 2;
    y = (x >= 6) ?  6 : x; /* This is equivalent to:  if (x >= 6)    y = 6;  else    y = x; */
    printf("y =%d ",y);
    return 0;
}