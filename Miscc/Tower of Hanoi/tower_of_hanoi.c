//An example of a C recursive function, Tower of Hanoi.

#include <stdio.h> 
void TOH (int n, char A, char C, char B) 
{ 
    if (n == 1) 
    { 
        printf("\n Move disk 1 from rod %c to rod %c", A, C); 
        return; 
    } 
    TOH (n-1, A, B, C); 
    printf("\n Move disk %d from rod %c to rod %c", n, A, C); 
    TOH (n-1, B, C, A); 
} 
int main() 
{ 
    int n; // Number of disks 
    printf ("Number of Disks: ");
    scanf("%d", &n); 
    TOH (n, 'A', 'C', 'B');  // A, B and C are names of rods 
    return 0; 
} 