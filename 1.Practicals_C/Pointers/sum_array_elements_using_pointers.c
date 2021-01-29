//Sum of elements of array using pointers.

#include <stdio.h>
int main ()
{
    int arr[] = {2, 3, 4, 5, 6};
    int sum= 0, *p;

    for (p= &arr[0]; p<= &arr[4]; p++)
         sum += *p;

    printf ("The sum of the array elements: %d", sum);
    return 0;
}