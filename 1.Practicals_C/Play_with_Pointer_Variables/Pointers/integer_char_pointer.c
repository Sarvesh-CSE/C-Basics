#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
// Example of integer pointer
int *ptr = (int *) malloc(sizeof(int));
*ptr = 10;
printf("%p\n", ptr); //prints the address pointed to by the pointer
printf("%p\n", &ptr); /*prints the address of pointer -- extremely useful
when dealing with double pointers*/
printf("%d\n", *ptr); //prints the integer content of ptr

// Example of string pointer 
char *str = (char *) malloc(256 * sizeof(char));
strcpy(str, "Hello there!");
printf("%p\n", str); // print the address in the heap
printf("%s", str);
return 0;
}