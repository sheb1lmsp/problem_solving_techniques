#include <stdio.h>

void merge_copy(int *a, int m, int *b, int n, int *c);
void copy(int *a, int pos, int max, int k, int *c);
void short_merge(int *a, int m, int *b, int n, int *c);

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
	int c[m+n];
	merge_copy(a,m,b,n, c);
	printf("\nAfter merging array A and B into C : ");
	for(i=0;i<(m+n);i++)
	{
		printf("%d\t", c[i]);
	}
}

void copy(int *a, int pos, int max, int k, int *c)
{
	while(pos<max)
	{
		c[k++] = a[pos++];
	}
}

void short_merge(int *a, int m, int *b, int n, int *c)
{
	int i=0, j=0, k=0;
	if(a[m-1] < b[n-1])
	{
		while(i<m)
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
		copy(b,j,n,k,c);
	}
	else
	{
		while(j<n)
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
		copy(a,i,m,k,c);
	}
}

void merge_copy(int *a, int m, int *b, int n, int *c)
{
	if(a[m-1] <= b[0])
	{
		copy(a,0,m,0,c);
		copy(b,0,n,m,c);
	}
	else if(b[n-1] <= a[0])
	{
		copy(b,0,n,0,c);
		copy(a,0,m,n,c);
	}
	else
	{
		short_merge(a,m,b,n,c);
	}
}