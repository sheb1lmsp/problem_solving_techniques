#include <stdio.h>
#include <math.h>

int smallest_divisor(int n);

void main()
{
	int n, result;
	printf("Enter the number\n");
	scanf("%d", &n);
	result = smallest_divisor(n);
	printf("Smallest divisor of %d is %d", n, result);
}

int smallest_divisor(int n)
{
	if(n%2 == 0)
	{
		return(2);
	}
	else
	{
		int r, div;
		r = sqrt(n);
		div = 3;
		while(div<=r)
		{ 
			if(n%div == 0)
			{
				return(div);
			}
			div = div + 2;
		}
	}
	return(n);
}