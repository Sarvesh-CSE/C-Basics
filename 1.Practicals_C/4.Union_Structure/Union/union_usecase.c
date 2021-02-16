#include<stdio.h>

struct student 
{
    union 
    { //anonymous union (unnamed union)
        char name[10];
        int roll;
    };
    int mark;
};
int main() 
{
    struct student stud;
    char choice;
    printf("\n You can enter your name or roll number ");
    printf("\n Do you want to enter the name (y or n): ");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y') 
    {
        printf("\n Enter name: ");
        scanf("%s",stud.name);
        printf("\n Name:%s",stud.name);
    }
    else 
    {
        printf("\n Enter roll number");
        scanf("%d",&stud.roll);
        printf("\n Roll:%d",stud.roll);
    }
    printf("\n Enter marks");
    scanf("%d",&stud.mark);
    printf("\n Marks:%d",stud.mark);
    return 0;
}