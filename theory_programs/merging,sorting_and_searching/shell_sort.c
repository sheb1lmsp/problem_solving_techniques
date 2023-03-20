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
	while(incr>=1)
	{
		for(i=incr;i<n;i++)
		{
			key = a[i];
			j=i-incr;
			while(j>=0 && key < a[j])
			{
				a[j+incr] = a[j];
				j = j-incr;
			}
			a[j+incr] = key;
		}
		incr = incr-2;
	}
}