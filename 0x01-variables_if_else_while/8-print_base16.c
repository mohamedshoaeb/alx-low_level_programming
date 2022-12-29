#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16
 *
 * Return: Always 0
 */

int main(void)
{
	int digit = 0;
	char ch = 'a';

	while (digit < 17 && ch < 'g')
	{
		if (digit < 10)
		{
			putchar(digit + '0');
			digit++;
		}
		else if (digit >= 10)
		{
			putchar(ch);
			ch++;
			digit++;
		}
	}
	putchar('\n');

	return (0);
}
