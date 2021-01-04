#include <stdio.h>

int main() {
    char str[] = "HELLO"; // Declaration and Initialization
    int length1 = 0, length2;

    // Loop from beginning till we reach null character.
    for(int i = 0 ; str[i] != '\0'; i++)                
        length1++;

    length2 = strlen(str);
    printf("The length of the string str is: %d\n", length1);
    printf("The length of the string str is: %d\n", length2);
    return 0;
}