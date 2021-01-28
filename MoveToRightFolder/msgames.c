#include<stdio.h>
#include<conio.h>
void main()
{
    int ms=21, cch, userch, i=1;
    do
    {
        printf("Round %d \n", i);
        i++;
        printf(" \n Choose from %d matchsticks in between 1 to 4 \n", 21);
        scanf("%d", &userch);
        if(userch>4)
        {
            printf("Wrong choice\n");
            continue;
        }
        cch=5-userch;
        ms=ms-(cch+userch);
        if(ms==1)
        {
            printf("User lost the match");
        }
    } while (ms>1);
getch();
}
