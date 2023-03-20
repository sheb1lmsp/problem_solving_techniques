#include<stdio.h>

void main()
{
	char str[20], ch;
	int i,alpha = 0, digit = 0, vowel = 0, cons = 0, space = 0, spclchar = 0;
	printf("Enter a string\n");
	scanf("%s", str);
	for(i=0;str[i]!='\0'; i++)
	{
		ch = str[i];
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch<= 'Z'))
		{
			++alpha;
			if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
			{
				++vowel;
			}
			else
			{
				++cons;
			}
		}
		else if(ch >= '0' && ch <= '9')
		{
			++digit;
		}
		else if(ch==' ')
		{
			++space;
		}
		else
		{
			++spclchar;
		}

	}
	printf("\nNo of alphabets : %d", alpha);
	printf("\nNo of digits : %d", digit);
	printf("\nNo of vowels : %d", vowel);
	printf("\nNo of consonants : %d", cons);
	printf("\nNo of spaces : %d", space);
	printf("\nNo of special characters : %d", spclchar);
}