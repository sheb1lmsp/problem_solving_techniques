#include <stdio.h>
#include <stdlib.h>

float square_root(float m, float l);

void main()
{
	float m, l;
	printf("Enter the number to find square root \n");
	scanf("%f", &m);
	printf("Enter the tolerance limit\n");
	scanf("%f", &l);
	printf("Approximate square root of %f is %f", m, square_root(m, l));
}

float square_root(float m, float l)
{
	float root, n;
	root = 0.0;
	n = m/2;
	while(1)
	{
		root = 0.5 * (n + (m/n));
		if(abs(root-n) < l)
		{
			break;
		}
		n = root;
	}
	return root;
}