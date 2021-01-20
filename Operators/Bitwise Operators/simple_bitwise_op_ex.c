#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5, y=6;
    printf("x & y = %d\n", (x & y));
    // "x & y = 4"
    printf("x | y = %d\n", (x | y));
    printf("x ^ y = %d\n", (x ^ y));
    printf("~x=%d\n", ~x);
    printf("x << 2 = %d\n",(x << 2));
    printf("x >> 2 = %d\n", (x >> 2));
}