#include<stdio.h>
union employee
{
    char key;

    struct manager
    {
        short int age;
        float shares;
        short int level;
    } manager;

    struct worker
    {
        short int age;
        short int skill;
        short int department;
    } worker;

};

int main()
{
    union employee company[10];

    printf("Enter the age of worker at index 5:");
    scanf("%d", &company[5].worker.age);
    printf("The value entered is %d", company[5].worker.age);
    printf("Don't try and access key Here's the reason %d", company[5].key);
}