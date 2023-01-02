#include <unistd.h>
#include "main.h"

/**
 * _putchar - write char
 *
 * Return : Alwyes 1 in succsess
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
