#include<stdio.h>
int gcd(int m, int n);

void main()
{
	int k, m, n;
	printf("Enter three numbers\n");
	scanf("%d%d%d", &k, &m, &n);
	printf("GCD(%d,%d,%d) = %d", k, m, n, gcd(k,gcd(m,n)));
}

int gcd(int m, int n)
{
	if(n==0)
	{
		return(m);
	}
	else if(n>m)
	{
		return(gcd(n,m));
	}
	else
	{
		return(gcd(n,m%n));
	}
}