#include<stdio.h>

void main()
{
char *ptr = "Hello"; // ptr holds the memory location of 'H'
printf("%p : %s\n", ptr, ptr);
ptr += 2; //ptr now points to the first'l'
printf("%p : %s\n", ptr, ptr);
}
