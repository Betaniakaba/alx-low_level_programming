#include <stdio.h>
#include "main.h"

/**
 * print_line - printing lines
 * @n: number times
 *
 * Return: void
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
