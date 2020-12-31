#include<stdio.h>
#include<time.h>
void custom_delay(unsigned int mseconds)
{
    clock_t delay_element;
    delay_element = mseconds + clock();
    while (delay_element > clock());
}
int main()
{
    int i;
    clock_t start_time;
    clock_t end_time;
    start_time = clock();
    printf("%d \n", start_time);
    for(i=0;i<10;i++)
    {
        custom_delay(100);
        printf("This is custom delay function\n");
    }
    end_time = clock();
    end_time = end_time- start_time;
    printf("Total execution time is %d \n", end_time);
    return 0;
}