#include <stdio.h>

void main()
{
	int n, m;
	int a[101], i;
	for(i=0;i<=100;i++)
	{
		a[i] = 0;
	}
	printf("Enter the number of students\n");
	scanf("%d", &n);
	printf("Enter %d marks\n", n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &m);
		a[m] = a[m] + 1;
	}
	printf("Marks\tFrequency\n");
	for(i=0;i<=100;i++)
	{
		if(a[i] != 0)
		{
			printf("%d\t%d\n", i, a[i]);
		}
	}
}