#include<stdio.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
    delay(10000);
    printf("This is delay function\n");
    }
    return 0;
}