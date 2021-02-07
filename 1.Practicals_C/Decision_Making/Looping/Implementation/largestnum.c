#include <stdio.h>
#include <conio.h>
int main ()

{
    int i,num,n,large=0;
    printf("How many numbers:");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        printf("\nEnter number %d: ", i+1);
        scanf("%d", &num);
        if (num>large)
        large=num;
    }
    printf("\n\nThe largest number is %d",large);
    getch();
   return 0;
}

