#include <stdio.h>
#include <string.h>

void kmp_search(char *str, char *pattern);
void compute_lps(char *pattern, int pat_len, int *lps);

void main()
{
	char str[100], pattern[100];
	printf("Enter the string\n");
	gets(str);
	printf("Enter the pattern string\n");
	gets(pattern);
	kmp_search(str, pattern);
}

void compute_lps(char *pattern, int pat_len, int *lps)
{
	int i=0, j=1;
	lps[0] = 0; //lps[0] is always 0
	while(j<pat_len)
	{
		if(pattern[j] == pattern[i])
		{
			lps[j++] = i+1;
			i++;
		}
		else
		{
			if(i!=0)
			{
				i = lps[i-1];
			}
			else
			{
				lps[j++] = 0;
			}
		}
	}
}

void kmp_search(char *str, char *pattern)
{
	int count = 0;
	int str_len, pat_len;
	str_len = strlen(str);
	pat_len = strlen(pattern);
	//create lps[] that will hold the longest prefix suffix values for pattern
	int lps[pat_len];
	int j = 0; //index for pattern
	int i = 0; //index for string
	//calculate lps array
	compute_lps(pattern, pat_len, lps);
	while(i<str_len)
	{
		if(str[i] == pattern[j])
		{
			j++;
			i++;
		}
		if(j == pat_len)
		{
			printf("\nFound pattern at index %d", i-j);
			count++;
			j = lps[j-1];
		}
		//mismatch after j matches
		else if(i < str_len && pattern[j] != str[i])
		{
			if(j != 0)
			{
				j = lps[j-1];
			}
			else
			{
				i++;
			}
		}
	}
	printf("\nTotal count of the pattern : %d\n", count);
}