#include<stdio.h>
int main()
{
       int a=5,b=5,c=10, result;
       
       result = (a == b) && (c > b);
       printf("(a == b) && (c > b) is %d \n", result);


       // T and T = T                 T or T = T           T or T or F or T = T
       //                                                 T and T and F and T =  F
       // T and F = F                 T or F = T 
       // F and T = F                 F or T = T  
       // F and F = F                 F or F = F
       // Serial Line                        Parallel __Line 

       result = (a == b) && (c < b);
       printf("(a == b) && (c < b) is %d \n", result);

       result = (a == b) || (c < b);
       printf("(a == b ) || (c < b) is %d \n", result);

       result = (a != b) || (c < b);
       printf("(a != b) || (c < b) is %d \n", result);

       result = !(a != b);
       printf("!(a != b) is %d \n", result);

       result = !(a == b);
       printf("!(a == b) is %d \n", result);

       return 0;
}

