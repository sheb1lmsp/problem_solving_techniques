#include<stdio.h>
#include<string.h>

void main()
{
	char str[20], cpy[20], cmp[20], cat[20];
	int value;
	printf("Enter a string\n");
	scanf("%s", str);
	printf("\nUsing strlen()\nThe length of the string is %d\n", strlen(str));
	printf("\nUsing strcpy()\nOriginal string is %s, copied string is %s\n", str, strcpy(cpy,str));
	printf("\nUsing strcmp()\nEnter a string to be compared with %s\n", str);
	scanf("%s", cmp);
	value = strcmp(str,cmp);
	if(value==0)
	{
		printf("Strings are same\n");
	}
	else
	{
		printf("Strigs are not same\n");
	}
	printf("\nUsing strcat()\nEnter a string to be concatenated with %s\n", str);
	scanf("%s", cat);
	printf("Concatenation of two strings is %s\n", strcat(str, cat));
}