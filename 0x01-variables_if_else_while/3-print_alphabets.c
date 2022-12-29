#include <stdio.h>

/**
 * main - entry point
 *
 * Description : print [a-z] , [A-Z] lphabet in lowercase then in uppercase
 *
 * Retuen: Always 0
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*MY code 1 */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*My code 2 */
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
