#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float percentage;
};

void main()
{
	struct student s[20];
	int i, n;
	printf("Enter the number of students\n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter name, roll number and percentage of student %d : ", i+1);
		scanf("%s%d%f", s[i].name, &s[i].roll, &s[i].percentage);
	}
	printf("\nStudent details : %d\n\n", n);
	printf("Name\t\tRoll\tPercentge\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].percentage);
	}
}