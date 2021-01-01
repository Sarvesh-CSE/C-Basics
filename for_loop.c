// FOR LOOP
//C program to calculate average of any n numbers entered through the keyboard.

#include <stdio.h>

int main()
 {
  int n, i;
  float sum=0, num, avg;
  printf("How many numbers:\n");
  scanf("%d",&n);
  printf("Enter the numbers:\n");

  for (i= 0; i < n; i++)
  {
    scanf("%f", &num);
    sum += num;
  }
  
 avg = sum/n;
 printf("The average of n natural numbers are: %f", avg);
  return 0;
}