#include<stdio.h>

void main()
{
	int i, n;
	float marks[10], sum = 0, avg;
	printf("Enter the total number of students\n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter student %d marks : ", i+1);
		scanf("%f", &marks[i]);
		sum = sum + marks[i];
	}
	avg = sum/n;
	printf("\nAverage of entered marks : %.2f", avg);
}