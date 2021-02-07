#include<stdio.h>
#include<math.h>
void main()
{
    int x = 100545;
    int num_digits = floor (log10 (abs (x))) + 1;
    printf("%d", num_digits);

}





