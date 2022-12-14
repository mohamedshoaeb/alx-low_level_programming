#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * 
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 *
 */


void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index * size + index];
	}
	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index * size + (size - index - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
