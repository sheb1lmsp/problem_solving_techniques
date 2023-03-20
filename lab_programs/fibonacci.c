#include<stdio.h>

int fibon(int num);

void main()
{
	int num, i;
	printf("Enter a number to generate fibonacci series\n");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		printf("%d\t", fibon(i));
	}
	printf("\nThe last element of the series is %d", fibon(num));
}

int fibon(int num)
{
	if(num == 0 || num == 1)
	{
		return(0);
	}
	else if(num==2)
	{
		return(1);
	}
	else
	{
		return(fibon(num-1) + fibon(num-2));
	}
}