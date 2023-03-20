#include <stdio.h>

void main()
{
	int a[10][10], b[10][10], c[10][10], row_a, col_a, row_b, col_b;
	int i,j,k;
	printf("Enter the number of rows and columns of matrix A\n");
	scanf("%d%d", &row_a, &col_a); 
	printf("Enter the number of rows and columns of matrix B\n");
	scanf("%d%d", &row_b, &col_b);

	if(col_a != row_b)
	{
		printf("Multiplication is not possible\n");
		return;
	}
	printf("Enter %d elements of matrix A\n", row_a * col_a);
	for(i=0;i<row_a;i++)
	{
		for(j=0;j<col_a;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter %d elements of matrix B\n", row_b * col_b);
	for(i=0;i<row_b;i++)
	{
		for(j=0;j<col_b;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nProduct of two matrices is\n");
	for(i=0;i<row_a;i++)
	{
		for(j=0;j<col_b;j++)
		{
			c[i][j] = 0;
			for(k=0;k<row_b;k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
			printf("\t%d", c[i][j]);
		}
		printf("\n");
	}
}