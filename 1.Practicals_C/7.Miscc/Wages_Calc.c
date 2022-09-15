#include<stdio.h>
int main(){
    int hour, amount;
    printf("Enter number of duty hours\n");
    scanf("%d", &hour);
    if (hour >= 1 && hour <= 8)
        amount = 100;
    else if (hour >= 9 && hour <= 12)
        amount = 100 + (hour - 8)*20;
    else if (hour >= 13 && hour <= 16)
        amount = 180 + (hour - 12)*40;
    else if (hour >= 17 && hour <= 20)
        amount = 340 + (hour - 16)*60;
    else if (hour >= 21 && hour <= 24)
        amount = 580 + (hour - 20)*80;
    printf("Amount incurred by worker : %d", amount);
    return 0;

}
