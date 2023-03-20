#include<stdio.h>

void main()
{
	int num, d, sum = 0, x, rev = 0;
	printf("Enter the number\n");
	scanf("%d", &num);
	x = num;
	while(num)
	{
		d = num%10;
		sum = sum + d;
		rev = (rev * 10) + d;
		num = num/10;
	}
	printf("\nSum of the digits is %d", sum);
	printf("\nReverse of the number is %d", rev);
	if(x==rev)
	{
		printf("\n%d is palindrome", x);
	}
	else
	{
		printf("\n%d is not palindrome", x);
	}
}