#include <stdio.h>
#define PI 3.1415
#define CIRCLE_AREA(r) (PI*r*r)

int main()
{
    float radius, area;
    printf("Current time: %s \n",__TIME__); 
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = CIRCLE_AREA(radius);
    //area = PI*radius*radius; // Notice, the use of PI
    printf("Area=%.2f",area);
    return 0;
}