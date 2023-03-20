#include<stdio.h>

void quick_sort(int *a, int low, int high);
int partition(int *a, int low, int high);
void display(int *a, int n);

void main()
{
	int a[10], n, i;
	printf("Enter the size of the array\n");
	scanf("%d", &n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Array before sorting : ");
	display(a,n);
	quick_sort(a,0,n-1);
	printf("Array after sorting : ");
	display(a,n);
}

void display(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *a, int low, int high)
{
	int pivot, i, j, temp;
	pivot = i = low;
	j = high;
	while(i<j)
	{
		while(i<high && a[i] <= a[pivot])
		{
			i++;
		}
		while(a[j] > a[pivot])
		{
			j--;
		}
		if(i<j)
		{
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[j], &a[pivot]);
	return(j);
}

void quick_sort(int *a, int low, int high)
{
	int j;
	if(low<high)
	{
		j = partition(a, low, high);
		quick_sort(a, low, j-1);
		quick_sort(a, j+1, high);
	}
}