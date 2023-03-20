#include <stdio.h>

void merge(int a[], int m, int b[], int n);

void main()
{
	int a[10], b[10];
	int m, n, i;
	printf("Enter the size of array A\n");
	scanf("%d", &m);
	printf("Enter array A elements in ascending order\n");
	for(i=0;i<m;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the size of array B\n");
	scanf("%d", &n);
	printf("Enter array B elements in ascending order\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &b[i]);
	}
	merge(a,m,b,n);
}

void merge(int a[], int m, int b[], int n)
{
	int c[m+n];
	int i = 0, j = 0, k = 0;
	while(i<m && j<n)
	{
		if(a[i] < b[j])
		{
			c[k++] = a[i++];
		}
		else
		{
			c[k++] = b[j++];
		}
	}
	while(i<m)
	{
		c[k++] = a[i++];
	}
	while(j<n)
	{
		c[k++] = b[j++];
	}
	printf("\nAfter merging array A and B into array C : ");
	for(i=0;i<(m+n);i++)
	{
		printf("%d\t", c[i]);
	}
}