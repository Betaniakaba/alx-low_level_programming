#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */
void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0' && b < _strlen(str); b += 2)
		_putchar(str[b]);
	_putchar('\n');
}
































