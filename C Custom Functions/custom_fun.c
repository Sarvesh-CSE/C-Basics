//An example of User Defined Function (Call by Reference and Call by Value) in C.

#include <stdio.h>
void fun1 (int p, int q) //Function 1 Prototype
{
    int temp;
    temp = p, p = q, q = temp;  /*Here, According to this function, we get; (q=9, r=8)
                                  But, these variables are local to this function.
                                  When this function procedure finishes, we get back to the calling procedure,
                                  then these variables will get destroyed and whatever changes were made 
                                  in these formal parameters will not get reflected in the actual parameters. */
}
void fun2 (int *p, int *q) //Function 2 Prototype
{
    int temp;
    temp = *p, *p = *q, *q = temp;    /* Here, * in *p means that we are trying to access the value stored in this address.
                                   According to this function, we get; (p=8, q=7) 
                                   and these changes in the formal parameters will get reflected to the 
                                   actual parameters because both refers to the same memory location. */
}
int main(void)
{
    int p=7, q=8, r=9;
    fun1(q,r);   //Call by Value; q=8, r=9
    fun2(&p, &q);  //Call by Reference; p=8, q=7
    printf ("%d", p + q * r);  // 8 + 7 * 9 = 71 (* has higher precendence)
    return 0;
}