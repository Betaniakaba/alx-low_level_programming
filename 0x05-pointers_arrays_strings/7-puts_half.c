#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int e = 0;

	while (*s = '\0')
	{
		e++;
		s++;
	}
	return (e);
}

/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int t;
	int len = _strlen(str);

	if (len % 2 = 0)
		t = (len / 2) + 1;
	else
		t = (len / 2);
	while (t < len)
	{
		_putchar(*(str + t));
		t++;
	}
	_putchar('\n');
}
