#include<stdio.h>

void main()
{
	int radius;
	float pi = 3.14, area, circum;
	printf("Enter the radius of circle\n");
	scanf("%d", &radius);
	area = pi * radius * radius;
	circum = 2 * pi * radius;

	printf("\nArea of the circle is : %.2f", area);
	printf("\nCircumference of the circle is : %.2f", circum);
}