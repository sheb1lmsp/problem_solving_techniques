#include<stdio.h>

void display_matrices(int a[10][10], int b[10][10], int m, int n);
void read_matrices(int a[10][10], int b[10][10], int m, int n);
void add_matrices(int a[10][10], int b[10][10], int m, int n);

void main()
{
	int a[10][10], b[10][10];
	int i, j, m, n;
	printf("Enter the order of matrices\n");
	scanf("%d%d", &m, &n);
	read_matrices(a, b, m, n);
	display_matrices(a, b, m, n);
	add_matrices(a, b, m, n);
}

void display_matrices(int a[10][10], int b[10][10], int m, int n)
{
	int i,j;
	printf("Matrices are..\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
}

void read_matrices(int a[10][10], int b[10][10], int m, int n)
{
	int i,j;
	printf("Enter %d elements of first matrix\n", m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter %d elements of second matrix\n", m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
}
void add_matrices(int a[10][10], int b[10][10], int m, int n)
{
	int sum[10][10], i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nSum of the given matrices :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}

}