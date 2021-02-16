#include<stdio.h>
void main()
{
    struct student
    {
        char name[50];
        char email[50];
        long int mobile;
    }student;
    struct add
    {
        char street[50], city[50];
        int pin;
    }add;
    struct dob
    {
        int date, month, year;
    }dob;
    printf("Enter the student details\n");
    printf("Enter the name\n");
    gets(student.name);
    printf("Enter the email\n");
    gets(student.email);
    printf("Enter the mobile number\n");
    scanf("%ld",&student.mobile);
    printf ("--------------------------\n");
    printf("Enter the address\n");
    printf("Enter your street\n");
    getchar();
    gets(add.street);
    printf("Enter your city\n");
    gets(add.city);
    printf("Enter your pin\n");
    scanf("%d",&add.pin);
    printf ("--------------------------\n");
    printf("Enter your date of birth\n");
    printf("Enter the date\n");
    scanf("%d",&dob.date);
    printf("Enter the month\n");
    scanf("%d",&dob.month);
    printf("Enter the year\n");
    scanf("%d",&dob.year);
    printf("\n\n\n\n\n\n");
    printf("Check your details\n");
    printf("Student details are:\n");
    printf("%s\n%s\n%ld\n",student.name,student.email,student.mobile);
    printf("Address details are\n");
    printf("%s\n%s\n%d\n",add.street,add.city,add.pin);
    printf("Date of birth is \n");
    printf("%d\n%d\n%d\n",dob.date,dob.month,dob.year);
}