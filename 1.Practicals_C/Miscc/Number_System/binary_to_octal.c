/**
 * C program to convert binary to octal number system
 */

#include <stdio.h>

int main()
{
    int octalConstant[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long binary, octal, tempBinary;
    int digit, place, i;

    octal = 0;
    place= 1;
    
    /* Input binary number from user */
    printf("Enter any binary number: ");
    scanf("%lld", &binary);

    /* Copy original binary value to temp variable */
    tempBinary = binary;
    

    while(tempBinary != 0)
    {
        /* Extract last three digit of binary */
        digit = tempBinary % 1000;

        /* Find octal equivalent of 3 digit binary */
        for(i=0; i<8; i++)
        {
            if(octalConstant[i] == digit)
            {
                /*
                 * Increase the place value of octal
                 * and add the previous octal value
                 */
                octal = (i * place) + octal;
                break;
            }
        }

        /* Remove the last three digit of binary */
        tempBinary /= 1000;

        /* Increase the place value */
        place *= 10; 
    }

    printf("Original binary number = %lld\n", binary);
    printf("Octal number = %lld", octal);

    return 0;
}