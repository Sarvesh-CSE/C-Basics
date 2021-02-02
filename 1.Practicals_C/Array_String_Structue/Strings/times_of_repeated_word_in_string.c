#include<stdio.h>
void main()
{
     char str[100],strtofind[100];
     int count;
     printf("enter the sentence:",str[100]);
     gets(str);
     printf("enter the word to search in sentence:");
     gets(strtofind);
     count=repeat(str,strtofind);                                //passing array to function 
     printf("total occurance of %s is :%d",strtofind,count);
 }
 int repeat(char *str,char *strtofind)                           //array str[] and array strtofind[] are called by refrence
 {
     int i,j,found,count=0;
     int len1,len2;
     len1=strlen(str);
     len2=strlen(strtofind);
     for(i=0;i<=len1-len2;i++)                                   
     {
         found=1;
         for(j=0;j<len2;j++)
         {
             if(str[i+j]!=strtofind[j])
             {
                 found=0;
                 break;                                         
             }
         }
         if(found==1)
            count++;
     }
     return(count);
 }
