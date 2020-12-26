#include <stdio.h>
int main()
{
    int var= 75;
    int var2=56;
    int num;
    num= sizeof(var) ? (var2>23 ? ((var==75) ? 'A' : 0) :0) :0;
    printf("%d", num);
    return 0;
}

/* 65 is the answer.

Explanation:

(1) At first the condition is sizeof(var)
if this condition is evaluated to be true then (var2>23 ? ((var==75) ? 'A' : 0) : 0) will be returned 
if false then 0 will be returned 

sizeof() is an unary operator which returns how many byte a datatype can hold 
as var is an variable of integer data type, sizeof(var) will either return 2 or 4 as machine 
to machine int vary . 
Every number except 0 is evaluated to be true. So (var2>23 ? ((var==75) ? 'A' : 0) : 0) it  will returned 

(2)next the condition is (var2>23)
if this condition is evaluated to be true then ((var==75) ? 'A' : 0) will be returned 
if false then 0 will be returned
we see, 56>23 is true then ((var==75) ? 'A' : 0) will be returned.

(3)the condition is (var==75)
if this condition is evaluated to be true then 'A'  will be returned 
if false then 0 will be returned

As 75==75 then 'A' will be returned and stored into num variable 
As c support auto type casting so int can store char.

In the final printf function we use the placeholder %d  and it print integer value.
According to Ascii, integer value of 'A' is 65, So the output will be 65. */