#include <stdio.h>
#define  message_for(a, b)  \
   printf(#a " and " #b " are good friends!\n")

#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif

int main(void) {
   message_for(Carole, Debra);
    printf("Here is the message: %s\n", MESSAGE);  
   return 0;
}


