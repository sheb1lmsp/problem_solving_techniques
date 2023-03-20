#include<stdio.h>

void main()
{
	float percentage;
	printf("Enter the percentage of the student\n");
	scanf("%f", &percentage);
	if(percentage>=75)
	{
		printf("First class with distinction");
	}
	else if(percentage>=60)
	{
		printf("First class");
	}
	else if(percentage>=50)
	{
		printf("Second class");
	}
	else if(percentage>=35)
	{
		printf("Third class");
	}
	else
	{
		printf("Failed");
	}
}