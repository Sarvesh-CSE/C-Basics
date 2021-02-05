#include<stdio.h>
void main()
{
   FILE *fp;
   char c;
   fp=fopen("C://DE_Data/my_file.txt","r");                 // opening an existing file in read mode
   if(fp==NULL)
   {
       printf("\nCould not open file test.c");            //if file does not exist in current directory it will not create new file in read mode.
   }
   printf("\n");
   while(1)
   {
       c=fgetc(fp);                                        // reading the file character by character
       if(c==EOF)
       break;
       printf("%c",c);                                    //printing the content of file
   }
   fclose(fp);                                             // Closing the file
   return 0;
}
