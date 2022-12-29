#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
 * main - entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return : Always return when success 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* my code*/
	if (n > 0)
		printf("%i is positive ", n);
	else if (n < 0)
		printf("%i is negative ", n);
	else
		printf("%i is zero ", n);

	return (0);
}
