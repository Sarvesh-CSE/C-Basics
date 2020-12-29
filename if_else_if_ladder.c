#include <stdio.h>

int main()
{

    int marks;
    printf("Please enter your marks\n");
    scanf("%d", &marks);

    if (marks>=90 && marks<=100)
    {
        printf ("Your grade is A\n");
    }
    else if (marks>=70 && marks<=89)
    {
        printf ("Your grade is B\n");
    }
    else if (marks>=50 && marks<=69)
    {
        printf ("Your grade is C\n");
    }
    else if (marks>=30 && marks<=49)
    {
        printf ("Your grade is D\n");
    }
    else if (marks<30)
    {
        printf ("Your grade is E\n");
    }
    else 
    {
        printf ("Invalid marks... Please enter the correct marks\n");
    }

    return 0;
}
