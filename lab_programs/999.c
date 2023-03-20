#include<stdio.h>

void main()
{
	int num, sum=0;
	printf("Enter numbers..\n");
	printf("Enter 999 at the end\n");
	while(1)
	{
		scanf("%d", &num);
		if(num==999)
		{
			break;
		}
		if(num>0)
		{
			sum = sum + num;
		}
	}
	printf("\nSum of the positive numbers : %d", sum);
}