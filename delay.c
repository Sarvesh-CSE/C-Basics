#include<stdio.h>
#include<time.h>
void custom_delay(unsigned int mseconds)
{
    // clock_t start_time;
    clock_t delay_element = mseconds + clock();
    while (delay_element > clock());
}
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
    custom_delay(2000);
    printf("This is custom delay function\n");
    }
    return 0;
}