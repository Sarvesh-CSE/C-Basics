#include <stdio.h>
int main (void)
{
    int a=3, b=5;   //example-1
    printf ("%d\n", a++ +b);  // post-increment in 'a', thus, 3+5=8
    printf ("%d\n", ++a +b);  /* pre-increment in 'a' (also, there's a post-increment in 'a' in the previous 
                                statement so, a=4), a=5, thus, 5+5=10 */

    int c=3, d=5;  //example-2
    printf ("%d\n", c+ ++d);  //pre-increment in 'd', 3+6=9

    int e=4, f=3;  //example-3
    printf ("%d\n", e++ + ++f);  // e++ + ++f, 4+4=8 (without spacing error will come), thus, e+++++f = error

    int g=4, h=6;   //example-4
    printf ("%d\n", -g-- + --h);  // post-decrement in 'g' and pre-decrement in 'h', thus, -4+5=1
    printf ("%d\n", --g - --h);  /* pre-decrement (also, post-increment in the previous statement) in 'g',
                                 pre-decrement (also, pre-decrement in the previous statement) in 'g', 
                                 thus, 2-4= -2 */
    int i=3, j=5;  //example-5
    float k=2.5, l=4.2;
    printf ("%f\n", ++k * i-- / j++ + --l); // 3.5*3 /5 + 3.2 = 5.3 (Left to Right Associativity) 
                                            // (+- have lower precedence than /*)
    printf ("%f\n", k+j+i-l); // 3.5 + 6 + 2 - 3.2 = 8.3

    float m=4.8, n=2.3;  //example-6
    printf ("%f", m++ - n--); // post-increment in 'i' and post-decrement in 'j', thus, 4.8-2.3= 2.5
    return 0;
}