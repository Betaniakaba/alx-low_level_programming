#include "main.h"

/**
 * _puts - a function that prints strings
 * @str: pointer
 * Return: void
 */
void _puts(char *str)
{
	int b = 0;

	while (*(str + b))
	{
	_putchar(*(str + b));
	b++;
	}
		_putchar('\n');
}
