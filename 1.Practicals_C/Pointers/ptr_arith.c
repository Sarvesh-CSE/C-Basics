#include <stdio.h>
void print( int* p )
  {
 printf("%d \n", *p);
  }

int main()
  {
  int a[ 5 ] = { 2, 3, 5, 7, 11 };

  print( a );   // 2
  print( a + 3 );   // 7
  }


// When compiling, the compiler understands int a[12] to have a named value called 'a' which consists of the following information:
            // - address of the first element in the array (a const pointer!)
            // - type of elements in the array
            // - length of the array

// In contrast, a pointer int* p only has the following information associated with it:
            // - address of the element it addresses (a pointer)
            // - type of the element it addresses

// These two things are pretty darn close. In code generated to access stuff, it is exactly the same:
            //     a[2]    is semantically equivalent to    *(p + 2)

// What muddles it is that an array address is a pointer, so using an array's name (its identifier) in a pointer context
//  causes it to degenerate into a pointer. 
 