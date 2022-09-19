#include "main.h"

/**
 * print_rev - a function that prints in reverse
 * @s: integer used
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (*(s + c))
	{
		c++;
	}
	c = c-1;
	while (c >= 0)
	{
		_putchar(*(s + c));
		c--;
	}
	_putchar('\n');
}
