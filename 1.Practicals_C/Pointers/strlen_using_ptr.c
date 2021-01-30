#include <stdio.h>
int strlen(char * s) {
  char *p = s;
  while (*p!='\0')
    p++;
  return p-s;
}
void main()
{

    char *c = "HelloWorld!";
    int string_len = strlen(c);
    printf("%d", string_len);
}
