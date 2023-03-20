#include<stdio.h>

void read_matrix(int mat[10][10], int m, int n), display_matrix(int mat[10][10], int m, int n);

void main()
{
	int a[10][10], b[10][10], sum[10][10], diff[10][10];
	int i, j, m, n;
	printf("Enter the number of rows and columns\n");
	scanf("%d%d", &m, &n);
	printf("Enter the elements of first matrix\n");
	read_matrix(a, m, n);
	printf("Enter the elements of second matrrix\n");
	read_matrix(b, m, n);
	printf("The first matrix is..\n");
	display_matrix(a, m, n);
	printf("The second matrix is..\n");
	display_matrix(b,m,n);
	printf("\nProcessing addition and substraction operations..\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			diff[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("The addition of two matrices..\n");
	display_matrix(sum, m, n);
	printf("The substraction of two matrices..\n");
	display_matrix(diff, m, n);
}

void display_matrix(int mat[10][10], int m, int n)
{
	int i, j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

void read_matrix(int mat[10][10], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
}