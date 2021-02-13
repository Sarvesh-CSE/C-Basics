#include<stdio.h>
enum year{Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct=20, Nov, Dec};
void main()
{
    for (int i=Jan; i<=Dec; i++)
         printf("%d ", i);
  /* as argument i is passed through printf statement therefore compiler would print values of i as 1,2,3,4,5,6,7,8,9, corresponding to Jan to Sep
  and then goes on printing  next values of i each time incremented by 1 till the value of i becomes 20 which corresponds to  Oct and
  then 21 and 22 corresponding to Nov and Dec.*/
         printf("%d %d %d %d %d %d %d %d %d %d %d %d",Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec);   //to print the values of months only  
}
