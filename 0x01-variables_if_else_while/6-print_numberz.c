#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 while using int variable
 *
 * Return: Always 0
 */


int main(void)
{
	int digit = 0;


	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
