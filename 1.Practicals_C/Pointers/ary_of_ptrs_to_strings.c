#include<stdio.h>
int main()
{
    int i = 1, *ip = &i;
    char *sports[] = {
                         "golf",
                         "hockey",
                         "football",
                         "cricket",
                         "shooting"
                     };

    for(i = 0; i < 5; i++)
    {
        printf("String = %10s", sports[i] ); // Print empty spaces if the string state is less than 10 characters
        printf("\tAddress of string literal = %u\n", sports[i]);
    }
    return 0;     // signal to operating system program ran fine
}