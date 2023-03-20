#include<stdio.h>

int linear_search(int *a, int n, int element), binary_search(int *a, int n, int element);
void bubble_sort(int *a, int n);

void main()
{
	int a[10], b[10], n, i, element, index;
	printf("Enter the length of the array\n");
	scanf("%d", &n);
	printf("Linear search..\n");
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be searched\n");
	scanf("%d", &element);
	index = linear_search(a, n, element);
	printf("The element %d found at index %d\n", element, index);

	printf("Binary search..\n");
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &b[i]);
	}
	printf("Processing bubble sort..\n");
	bubble_sort(b,n);
	printf("The array has sorted in ascending order\n");
	printf("Enter the element to be searched\n");
	scanf("%d", &element);
	index = binary_search(b, n, element);
	printf("The element %d found at index %d", element, index);
}

void bubble_sort(int *a, int n)
{
	int temp, i, j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int linear_search(int *a, int n, int element)
{
	for(int i=0;i<n;i++)
	{
		if(a[i] == element)
		{
			return(i);
		}
	}
	return(-1);
}

int binary_search(int *a, int n, int element)
{
	int low = 0, mid, high = n-1;
	while(low<=high)
	{
		mid = (low+high) / 2;
		if(a[mid] == element)
		{
			return(mid);
		}
		else if(a[mid] < element)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
}