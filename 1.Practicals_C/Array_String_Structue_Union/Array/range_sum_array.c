#include<stdio.h>

int main ( ) {
    int A[ 6 ] = {2, 5, 6, 4, 7, 9 } ;

    // Take a variable of integer type to store sum and initialize it to 0 .
    int SUM = 0;

    /* Run a loop from starting index to ending index. */

    for( int i = 2 ; i <= 4 ;i++ ) {
        SUM = SUM + A[ i ] ;
    }
    printf("The required output is:  %d\n", SUM);
    return 0;
}