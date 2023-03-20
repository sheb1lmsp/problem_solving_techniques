#include<stdio.h>

void bubble_sort(int *a, int n), display(int *a, int n);

void main()
{
	int a[10], n, i;
	printf("Enter the length of the array\n");
	scanf("%d", &n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	display(a, n);
	bubble_sort(a, n);
	display(a, n);
}

void display(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}

void bubble_sort(int *a, int n)
{
	int temp, i, j;
	printf("Bubble sort..\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}	
}