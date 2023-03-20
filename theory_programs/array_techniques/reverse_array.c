#include <stdio.h>

void main()
{
	int a[10], n, i, j, temp;
	printf("Enter the size of the array\n");
	scanf("%d", &n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	i=0;
	j = n-1;
	while(i<j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
	printf("\nArray after reversing\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t", a[i]);
	}
}