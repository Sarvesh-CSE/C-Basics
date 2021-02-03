#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr = NULL;
    //create a text file
    fptr  = fopen ("my_file.txt", "w");
    if(fptr == NULL)
    {
        printf("File is not created\n");
        exit(1);
    }
    else
    {
        printf("File is created\n");
    }
    //close the file
    fclose(fptr);
    return 0;
}