#include<stdio.h>

void display(int *a, int n);

void main()
{
	int a[10], i,j,k,n;
	printf("Enter the size of the array\n");
	scanf("%d", &n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The array elements are..\n");
	display(a, n);
	printf("\nDeleteing duplicate elements...\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k] = a[k+1];
				}
				j--;
				n--;
			}
		}
	}
	printf("\nArray after deleting duplicate elements\n");
	display(a, n);
}

void display(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t", a[i]);
	}
}