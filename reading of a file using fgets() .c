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
  while(fgets(str,9,fp)!=NULL)       //fgets(str,n,fp)
  {
    printf("%s",str);
  }
  fclose(fp);
}
