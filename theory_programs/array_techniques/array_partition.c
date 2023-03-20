#include <stdio.h>

void partition(int *a, int n, int x);

void main()
{
	int a[10], n, i, x;
	printf("Enter the size of the array\n");
	scanf("%d", &n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the partition element\n");
	scanf("%d", &x);
	partition(a,n,x);
}

void partition(int *a, int n, int x)
{
	int i,j, temp, k;
	i = 0;
	j = n-1;
	while(i<j)
	{
		while(i<j && a[i] <= x)
			++i;
		while(i<j && a[i] > x)
			--j;

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		++i;
		--j;
	}
	
	printf("Array after partition\n");
	for(i=0;i<n;i++)
		printf("%d\t", a[i]);

	printf("\nLeft array elements <= %d : ", x);
	for(i=0;a[i]<=x;i++)
		printf("%d\t", a[i]);

	printf("\nRight array elements > %d : ", x);
	for(i;i<n;i++)
		printf("%d\t", a[i]);
}