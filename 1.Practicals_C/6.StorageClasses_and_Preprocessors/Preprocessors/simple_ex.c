#include <stdio.h>
#define PI 3.1415
#define CIRCLE_AREA(r) (PI*r*r)
#define MAX(x,y) ((x) > (y) ? (x) : (y))
int main()
{
    float radius, area;
    printf("The script running is: %s \n", __FILE__);
    printf("Script started executiing at time: %s \n",__TIME__); 
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = CIRCLE_AREA(radius);
    //area = PI*radius*radius; // Notice, the use of PI
    printf("Area=%.2f",area);
    printf(" \n----------------------------- \n");
    printf("Max between 20 and 10 is %d\n", MAX(10, 20));
    printf("Script  finished its execution at time: %s \n",__TIME__); 
    return 0;
}