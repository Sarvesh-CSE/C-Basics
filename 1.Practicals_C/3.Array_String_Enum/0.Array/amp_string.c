#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[256] = "Scanf withouth &";

    printf("%p \n", word);
    // 0061FE20

    printf("%p \n", &word[0]);
    // 0061FE20

    // scanf("%s", word);
    printf("The string is: %s", word);


    return 0;
}