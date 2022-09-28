#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, b = 0, c = 0;

	for (i = 0; i < (size * size); i++)
	{
	if (i % (size + 1) == 0)
	b += *(a + i);
	if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
	c += *(a + i);
	}
	printf("%d, %d\n", b, c);
}
