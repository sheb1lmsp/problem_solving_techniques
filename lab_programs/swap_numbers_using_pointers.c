#include<stdio.h>

void swap(int *A, int *B);

void main()
{
	int A, B;
	printf("Enter the values of A and B\n");
	scanf("%d%d", &A, &B);
	printf("Before swapping the numbers...\n");
	printf("A = %d\tB = %d\n", A, B);
	swap(&A, &B);
	printf("\nAfter swapping the numbers...\n");
	printf("A = %d\tB = %d\n", A, B);
}

void swap(int *A, int *B)
{
	int temp;
	temp = *A;
	*A = *B;
	*B = temp;
}