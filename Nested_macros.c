#include<stdio.h>
#define SQR(x) (x*x)
#define CUBE(x) (SQR(x)*x)

void main()
{ 
    int sarea, cvolume;
     
    sarea = SQR(5);
    cvolume = CUBE(5);

    printf("Area of square: %d", sarea);
    printf("\nVolume of cube:%d", cvolume);

}
