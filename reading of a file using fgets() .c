#include<stdio.h>
main()
{
  char str[10];
  FILE *fp=fopen("f1.txt"."r");
  if(fp == NULL)
  { 
    printf("file not found");
    return(-1);
  }
  while(fgets(str,9,fp)!=NULL)       //read from file
  {
    printf("%s",str);                //print read content to Stdout file
  }
  fclose(fp);
}
