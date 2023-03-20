#include<stdio.h>
#include<math.h>

void main()
{
	double a, b, c, discriminant, root1, root2, realPart, imagPart;
	printf("Enter coefficients a, b and c:\n");
	scanf("%1f%1f%1f", &a, &b, &c);
	discriminant = b * b - 4 * a * c;
	
	if(discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root1 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Roots are real and different: ");
		printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
	}
	else if(discriminant == 0)
	{
		root1 = root2 = -b / (2 * a);
		printf("Roots are real and equal: ");
		printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
	}
	else
	{
		realPart = -b / (2 * a);
		imagPart = sqrt(-discriminant) / (2 * a);
		printf("Roots are not real: ");
		printf("root1 = %.2lf+%.2lf and root2 = %.2lf-%.2lf", realPart, imagPart, realPart, imagPart);
	}
}