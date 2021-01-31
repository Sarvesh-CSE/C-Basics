#include <stdio.h>
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: \n");
    scanf("%d", &num);

    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("\nSum = %d", sum);

    return 0;
}
