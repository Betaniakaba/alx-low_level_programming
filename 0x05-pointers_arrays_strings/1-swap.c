#include "main.h"

/**
 * swap_int - Swap values of integers
 * @a: Integer to be swaped with b
 * @b: Integer to be swapped with a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int e;

	e = *b;
	*b = *a;
	*a = e;
}
