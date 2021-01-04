#include<stdio.h>
int main()
{ 
int anjali_age, anchal_age, ayush_age ;
printf("enter the age of anjali,anchal and ayush");
scanf("%d %d %d",&anjali_age,  &anchal_age, &ayush_age);
if(anjali_age < anchal_age && anjali_age < ayush_age)
printf("anjali is the youngest one");
else if (anchal_age < anjali_age && anchal_age < ayush_age)
printf("the youngest one is anchal");
else if(ayush_age < anjali_age && ayush_age < anchal_age)
printf(" the youngest one is ayush");
return 0;
}
