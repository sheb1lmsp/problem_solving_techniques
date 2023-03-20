#include<stdio.h>

void main()
{
	int num1, num2, num3, larg;
	printf("Enter three numbers\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	if(num1 > num2 && num1 > num3)
	{
		larg = num1;
	}
	else if(num2 > num3)
	{
		larg = num2;
	}
	else
	{
		larg = num3;
	}
	printf("The largest number is %d", larg);
}