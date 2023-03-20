#include <stdio.h>

void rem_dups(int *a, int n);

void main()
{
	int a[10], n, i;
	printf("Enter the size of the array\n");
	scanf("%d", &n);
	printf("Enter the array elements in sorted order\n");
	for(i = 0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	rem_dups(a, n);
}

void rem_dups(int *a, int n)
{
	int i, j=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i] != a[i+1])
		{
			a[j++] = a[i];
		}
	}
	a[j++] = a[n-1];
	printf("\nArray elements after removal of duplicates\n");
	for(i=0;i<j;i++)
	{
		printf("%d\t", a[i]);
	}
}