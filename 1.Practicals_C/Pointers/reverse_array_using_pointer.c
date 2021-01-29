//Print the elements of the array in reverse order using pointers.

#include <stdio.h>
#define S 4

int main ()
{
    int arr[S], *p;
    printf("Enter %d elements in the array: ", S);
    for(p=arr; p <= arr+S-1; p++)
         scanf("%d", p);

    printf("The array elements in reverse order: \n");
    for(p = arr+S-1; p >= arr; p--)
        printf("%d \t", *p);

    return 0;
}