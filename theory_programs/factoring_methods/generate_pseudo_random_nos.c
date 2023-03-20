#include <stdio.h>
#include <math.h>

void generate_pseudo(int n);

void main()
{
	int n;
	printf("Enter no of pseudo random nos to be generated\n");
	scanf("%d", &n);
	generate_pseudo(n);
}

void generate_pseudo(int n)
{
	int a=109, b=853, m=40960, i;
	long long int x = 3553;
	printf("\nPseudo random numbers are : ");
	for(i=1;i<=n;i++)
	{
		x = (a*x + b) % m;
		printf("%lli\t", x);
	}
}