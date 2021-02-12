//code to print the value of elements of enum only
#include<stdio.h>
enum year{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct=20,Nov,Dec};
void main()
{
    printf("%d %d %d %d %d %d %d %d %d %d %d %d",Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec);
}
