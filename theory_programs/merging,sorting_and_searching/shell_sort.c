#include <stdio.h>
void shell_sort(int *a, int n, int incr);
void display(int *a, int n);

void main()
{
	int a[10], incr, n, i;
	printf("Enter the size of the array\n");
	scanf("%d", &n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the maximum increment(ODD VALUE)\n");
	scanf("%d", &incr);
	printf("Array before sorting : ");
	display(a,n);
	shell_sort(a,n,incr);
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