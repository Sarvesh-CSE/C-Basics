//Sum of elements of array using pointers.

#include <stdio.h>
int main ()
{
    int arr[] = {2, 3, 4, 5, 6};
    int sum= 0, *p;

    for (p= &arr[0]; p<= &arr[4]; p++)  // assign address of zeroth element to p, start iteration, reach at every array element location (increment pointer to point to next location)
         sum += *p;                      // access the value at each array element location and add to the sum variable.

    printf ("The sum of the array elements: %d", sum); //print sum
    return 0;
}
