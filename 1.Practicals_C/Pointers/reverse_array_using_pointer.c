//Print the elements of the array in reverse order using pointers.

#include <stdio.h>
#define S 4 // During preprocessing, macro template (S) will get replaced by macro expansion (4).

int main ()
{
    int arr[S], *p;
    printf("Enter %d elements in the array: ", S);
    for(p=arr; p <= arr+S-1; p++) // base address of arr is stored in p, start iteration, increment pointer to point to next location
         scanf("%d", p); //store data in array

    printf("The array elements in reverse order: \n");
    for(p = arr+S-1; p >= arr; p--) //Loop to reverse the order of the array
        printf("%d \t", *p);

    return 0;
}

/* Loop to reverse the order of the array-

   Assign address of (S – 1)th element(last element of the array) to pointer variable p. 
   Iterate through the for loop and for each iteration the value present at the address p is printed. 
   And for each iteration decrement the value of p by 1.

   Then, the array elements will be printed in the reverse order.*/