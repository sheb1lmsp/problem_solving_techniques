#include <stdio.h>
#include <string.h>
#define MAXSIZE 1000

void textline_adjustment(char *str, int wid);

void main()
{
	char str[MAXSIZE];
	int wid;
	printf("Enter the paragraph\n");
	gets(str);
	printf("Enter the line width limit\n");
	scanf("%d", &wid);
	textline_adjustment(str, wid);
}

void textline_adjustment(char str[], int wid)
{
	int str_len = strlen(str);
	int i=0, k, counter;
	char output[MAXSIZE];
	while(i<str_len)
	{
		for(counter=1;counter <= wid; counter++)
		{
			if(i==str_len)
			{
				output[i] = '\0';
				printf("\nText line adjustment\n");
				printf("......................\n");
				printf("%s", output);
				return;
			}
			else
			{
				output[i] = str[i];
				i++;
			}
		}
		//check for whitespace
		if(isspace(str[i]))
		{
			output[i] = '\n';
			i++;
		}
		//check for nearest whitespace back in string
		else
		{
			for(k =i;k>0;k--)
			{
				if(isspace(str[k]))
				{
					output[k] = '\n';
					i = k+1;
					break;
				}	
			}
		}
	}
}