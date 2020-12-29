# include<conio.h>
# include<stdio.h>
void main()
{
int i,num;
clrscr();
printf("enter the number\n");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",num,i,num*i);
}
getch();
}
