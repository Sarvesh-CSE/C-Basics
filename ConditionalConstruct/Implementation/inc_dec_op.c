#include <stdio.h>
int main() {
   int var1 = 5, var2 = 5;

   // var1 is displayed. Then, it is increased to 6.
   printf("%d\n", var1++); // postincrement => increment post (after) return

   // var2 is increased to 6. Then, it is displayed.
   printf("%d\n", ++var2); // preincrement =>  increment pre (before) return

   return 0;
}