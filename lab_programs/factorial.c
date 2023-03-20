#include<stdio.h>

int fact(int num);

void main()
{
	int num, res;
	printf("Enter a number\n");
	scanf("%d", &num);
	res = fact(num);
	printf("The factorial of %d is %d", num, res);
}

int fact(int num)
{
	if(num==0)
	{
		return(1);
	}
	else
	{
		return(num * fact(num-1));
	}
}