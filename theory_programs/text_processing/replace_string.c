#include <stdio.h>
#include <string.h>

void find_replace(char *str, char *find, char *replace);

void main()
{
	char str[50], find[50], replace[50];
	printf("Enter the string\n");
	gets(str);
	printf("Enter a string to find\n");
	gets(find);
	printf("Enter the string to replace\n");
	gets(replace);
	find_replace(str, find, replace);
}

void find_replace(char *str, char *find, char *replace)
{
	char new_str[50];
	int str_len, find_len, rep_len;
	int i, j, m=0, k=0;
	int flag, start;
	str_len = strlen(str);
	find_len = strlen(find);
	rep_len = strlen(replace);
	for(i=0;i<str_len;i++)
	{
		j=0;
		flag = 0;
		start = i;
		while(str[i] == find[j])
		{
			if(j==find_len-1)
			{
				flag = 1;
				break;
			}
			i++;
			j++;
		}
		if(flag==0)
		{
			i = i-j;
			new_str[m++] = str[i];
		}
		else
		{
			for(k=start;k<start+rep_len;k++)
			{
				new_str[m++] = replace[k-start];
			}
		}
	}
	new_str[m] = '\0';
	printf("\nThe string after replacing : %s\n", new_str);
}