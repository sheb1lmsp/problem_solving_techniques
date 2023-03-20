#include <stdio.h>

void main()
{
	int a[10], n;
	int i, j;
	int l, u;
	int k, x, temp;
	printf("Enter the length of the array\n");
	scanf("%d", &n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the value of k\n");
	scanf("%d", &k);
	k = k-1;
	l = 0;
	u = n-1;
	while(l<u)
	{
		i = l;
		j = u;
		x = a[k];

		while(i<=k && j>=k)
		{
			while(a[i]<x)
				i = i+1;
			while(a[j]>x)
				j = j-1;

			temp = a[i];
			a[i] = a[j];
			a[j] = temp;

			i = i+1;
			j = j-1;
		}

		if(j<k)
			l = i;
		if(i>k)
			u = j;
	}
	printf("Complete array after Partition\n");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nKth smallest element is %d at position %d", a[k], k+1);
}
