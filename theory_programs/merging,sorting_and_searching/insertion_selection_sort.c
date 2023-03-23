#include<stdio.h>

void sel_sort(int *a, int n), ins_sort(int *a, int n), display(int *a, int n);

void main()
{
	int a[10], b[10], n, i;
	printf("Enter the length of the array\n");
	scanf("%d", &n);
	printf("Enter the array A elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	display(a, n);
	sel_sort(a,n);
	display(a,n);
	printf("Enter the array B elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &b[i]);
	}
	display(b,n);
	ins_sort(b,n);
	display(b,n);
}

void display(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}

void sel_sort(int *a, int n)
{
	int indexmax, temp, i, j;
	printf("Selection sort..\n");
	for(i=0;i<n-1;i++)
	{
		indexmax = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j] > a[indexmax])
			{
				indexmax = j;
			}
		}
		temp = a[i];
		a[i] = a[indexmax];
		a[indexmax] = temp;
	}
}

void ins_sort(int *a, int n)
{
	int key, i, j;
	printf("Insertion sort..\n");
	for(i=1;i<n;i++)
	{
		key = a[i];
		for(j=i-1; j>=0 && key > a[j]; j--)
		{
			a[j+1] = a[j];
		}
		a[j+1] = key;
	}
}