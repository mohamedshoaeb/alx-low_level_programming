#include <stdio.h>
/**
 * main - entry point
 *
 * Description: 'print alphabet letters'
 *
 * Return: Always is 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
