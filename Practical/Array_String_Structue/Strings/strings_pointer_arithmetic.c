#include <stdio.h>
int main (void)
{
char a[] = "Year2021"; 
char *p =a; //p points to character array a[] 
printf("%c,%c", *p,*(p+p[4]-p[5])); // Use Pointer Arithmetic
return 0;
}

// Answer: Y,a

/* 
   Explanation:
   As p is a pointer of type character, *p will print ‘Y’.

   Using pointer arithmetic,
   *(p+p[4]-p[5]) = *(p+50-48) (Using ascii values of 2 and 0) 
                  = *(p+2) 
                  = a(Since, p is holding the address of base string, *(p+2) means access the value at 
                      two positions ahead of the base index, i.e, "a" will be printed)
                      
   Therefore, the output will be Y, a.
*/