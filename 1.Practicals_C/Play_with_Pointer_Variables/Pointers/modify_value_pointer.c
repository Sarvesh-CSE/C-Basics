 #include <stdio.h>
 void fun(int *p, int *q)  // Function declaration
 {
     p = q;  // Assigning content of q to p
    *p = 5;  // Replace value at j with 5 (Now, p contains address of j, thus, the content of j is replaced)
 }

int main()

{
int i=1, j=3;
fun(&i,&j);  // Function call
printf("%d %d", i,j); // Thus, 1 5 will be printed.
return 0;
}
