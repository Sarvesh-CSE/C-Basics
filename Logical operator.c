#include<stdio.h>
main()
{
       Int a=5,b=5,c=10, result;
       
       result = (a == b) && (c > b);
       Printf("(a == b) && (c > b) is %d \n", result);

       result = (a == b) && (c < b);
       Printf("(a == b) && (c < b) is %d \n", result);

       result = (a == b) || (c < b);
       Printf("(a == b ) || (c < b) is %d \n", result);

       result = (a != b) || (c < b);
       Printf("(a != b) || (c < b) is %d \n", result);

       result = !(a != b);
       Printf("!(a != b) is %d \n", result);

       result = !(a = b);
       Printf("!(a == b) is %d \n", result);

       return 0;
}

