#include <stdio.h>

void main()
{
	int a[10], n, i, max;
	printf("Enter the length of the array\n");
	scanf("%d", &n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	printf("The largest element is %d", max);
}