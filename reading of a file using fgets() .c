#include<stdio.h>
main()
{
  char str[10];
  file *fp;
  fp = fopen("f1.txt"."r");
  if(fp == null)
  { 
    printf("file not found");
    exist(1);
  }
  while(fgets(str,9,fp)!=null)       //fgets(str,n,fp)
  {
    printf("%s",str);
  }
  fclose(fp);
}
