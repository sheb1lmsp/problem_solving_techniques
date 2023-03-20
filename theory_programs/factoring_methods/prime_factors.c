#include <stdio.h>
#include <math.h>

void prime_factors(int n);

void main()
{
	int n;
	printf("Enter the number to find prime factors\n");
	scanf("%d", &n);
	prime_factors(n);
}

void prime_factors(int n)
{
	int i;
	printf("Prime factors of %d are : ", n);
	while(n % 2 == 0)
	{
		printf(" %d", 2);
		n = n/2;
	}
	for(i=3; i<=sqrt(n); i=i+2)
	{
		while(n % i == 0)
		{
			printf(" %d", i);
			n = n/i;
		}
	}

	if (n>2)
	{
		printf(" %d", n);
	}
}