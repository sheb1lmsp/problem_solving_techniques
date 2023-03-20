#include <stdio.h>
#include <string.h>

void pattern_search(char *str,char *pattern);

void main()
{
	char str[50], pattern[10];
	printf("Enter a string\n");
	gets(str);
	printf("Enter the pattern string\n");
	gets(pattern);
	pattern_search(str, pattern);
}

void pattern_search(char *str,char *pattern)
{
	int str_len = strlen(str);
	int pat_len = strlen(pattern);
	int i, j, count = 0;
	for(i=0;i<=(str_len-pat_len);i++)
	{
		for(j=0;j<pat_len;j++)
		{
			if(str[i+j] != pattern[j])
			{
				break;
			}
		}
		if(j == pat_len)
		{
			count++;
			printf("\nPattern %s found at %d position", pattern, i+1);			
		}
	}
	printf("\nPattern %s Occurs %d times", pattern, count);
}