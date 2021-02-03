#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr = NULL;
    int ch =0;
    fptr = fopen("another_ex.txt", "w");
    if(fptr == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    fputs("Hello There, I hope this will help print a statement! \n",fptr);
    //Write A to Z in file
    for(ch =65 ; ch <= 90 ; ch++)
        fputc(ch, fptr);

    //close the file
    fclose(fptr);
    printf("A t0 Z written to the created file\n");
    return 0;
}