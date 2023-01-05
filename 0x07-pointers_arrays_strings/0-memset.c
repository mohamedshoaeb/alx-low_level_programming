/**
 * _memset - a function that fills
 * memory with a constant byte
 *
 * @s: pointer to memory area.
 * @b: constant to fill memory with.
 * @n: bytes of the memory area to be filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
		s[counter] = b;
	return (s);
}
