#include <stdio.h>

int power(int x, int n);

void main()
{
	int n, x;
	printf("Enter the coefficient\n");
	scanf("%d", &x);
	printf("Enter the power n\n");
	scanf("%d", &n);
	printf("power(%d, %d) = %d", x, n, power(x,n));
}

int power(int x, int n)
{
	int pow = 1;
	int i;
	for(i=0;i<n;i++)
	{
		pow = pow * x;
	}
	return(pow);
}