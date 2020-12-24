// FOR LOOP
//C program to calculate average of any n natural numbers entered through the keyboard.

#include <stdio.h>

int main()
 {
  int n, num, i;
  float sum=0, avg;
  printf("How many numbers:\n");
  scanf("%d",&n);
  printf("Enter the natural numbers:\n");

  for (i= 0; i < n; i++)
  {
    scanf("%d", &num);
    sum += num;
  }
  
 avg = sum/n;
 printf("The average of n natural numbers are: %f", avg);
  return 0;
}