#include <stdio.h>

void shell_sort(int *a, int n, int incr);

void main()
{
	int a[10], n, i, k, incr;
	printf("Enter the length of the array\n");
	scanf("%d", &n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the increment value for shell sort\n");
	scanf("%d", &incr);
	shell_sort(a,n, incr);
	printf("Enter the value of k\n");
	scanf("%d", &k);
	printf("Complete array after Sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nKth smallest element is %d at position %d", a[k-1], k);
}

void shell_sort(int *a, int n, int incr)
{
	int i, j, key;
	for(incr; incr>=1; incr = incr - 2)
	{
		for(i=incr;i<n;i++)
		{
			key = a[i];
			for(j=i-incr; j>=0 && key < a[j]; j = j-incr)
			{
				a[j+incr] = a[j];
			}
			a[j+incr] = key;
		}
	}
}