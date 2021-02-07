#include <stdio.h>

int main(int argc, char *argv[])
{
   int i;
   printf("number of arguments: %d\n", argc);
   for (i=0; i < argc; i++)
      printf("argument %d: (%s)\n", i, argv[i]);
   return 0;
}

// How you would run:
// gcc .\basic_cla.c
// .\basic_cla.exe first second
