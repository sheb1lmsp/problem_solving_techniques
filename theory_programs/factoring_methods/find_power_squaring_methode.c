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
	if(n==0)
	{
		return(1);
	}
	while(n>0)
	{
		if(n%2 == 1)
		{
			pow = pow * x;
		}
		n = n/2;
		x = x * x;
	}
	return(pow);
}