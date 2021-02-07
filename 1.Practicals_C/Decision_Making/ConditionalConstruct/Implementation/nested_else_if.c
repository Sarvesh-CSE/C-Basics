#include<stdio.h>
int main()
{
	int marks=83;
	if(marks>75){
		printf("First class");
	}
	else if(marks>65){
		printf("Second class");
	}
	else if(marks>55){
		printf("Third class");
	}
	else{
		printf("Fourth class");
	}
	return 0;
}