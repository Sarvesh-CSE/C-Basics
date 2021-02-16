#include <stdio.h>
struct test1{
            int x, y;
            };
union test  {
            int x, y;
            };
int main()
{
    struct test1 t1={1,2};
    union test t;
    t.x = 3; // t.y also gets value 3
    printf ("after fixing x value the coordinates of t will be %d %d\n\n",t.x, t.y);
    t.y = 4; // t.x is also updated to 4
    printf ("After fixing y value the coordinates of t will be %d %d\n\n", t.x, t.y);
    printf("The coordinates of t1 are %d %d",t1.x,t1.y);
    return 0;
}
