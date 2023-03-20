#include<stdio.h>

void main()
{
	char str[20];
	int len=0;
	printf("Enter a string\n");
	scanf("%s", str);
	while(str[len]!= '\0')
	{
		len++;
	}
	printf("The length of the string is %d", len);
}