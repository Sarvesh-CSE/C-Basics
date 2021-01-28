#include<stdio.h>

void main()
{
char ary[] = "Hello";
char *ptr = "Hello";
// Print out address and contents
printf("%p : %s\n", ary, ary); // Use format specifiers "%p" for pointers, "%d" for integers and "%s" for Strings.
printf("%p : %s\n", ptr, ptr);
printf("%d \n",sizeof(ary));   // Returns the number of bytes required for the entire array
printf("%d \n",sizeof(ptr));   // Returns the number bytes required for a pointer (e.g. 4 or 8 for a 32 bit or 64-bit machine)
}