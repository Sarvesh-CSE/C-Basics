#include <stdio.h>
int main()
{
    int y=0;
    int x = 2;
    // if (x >= 6)
    //     printf("6");
    // else{
    //     y=x;
    //     printf("y= %d \n", x);}
    y = (x >= 6) ?  6 : x; /* This is equivalent to:  if (x >= 6)    y = 6;  else    y = x; */
    // expression ? this_if_true : this_if_false
    printf("y =%d ",y);
    return 0;
}