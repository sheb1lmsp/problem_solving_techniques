#include<stdio.h>

void main()
{
	int num, i, flag = 0;
	printf("Enter a number\n");
	scanf("%d", &num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			++flag;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is a prime number", num);
	}
	else
	{
		printf("%d is not a prime number", num);
	}
}