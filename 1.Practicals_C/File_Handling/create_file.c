#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr = NULL;
    //create a text file
    fptr  = fopen ("my_file.txt", "w"); //"E://DE_Data/my_file.txt"
    if(fptr == NULL)
    {
        printf("File is not created\n");
        exit(1);
    }
    else
        printf("File is created\n");

    char name[40];
    //three times asking for student name
    for (int i=0 ; i<4; i++)
    {
        puts ("Enter the student name: ");
        //Get input from the user
        gets (name);
        //Write formated data into the file
        fprintf (fptr, "%d. Name  = %s\n",i,name);
    }
    //close the file
    fclose(fptr);
    return 0;
}