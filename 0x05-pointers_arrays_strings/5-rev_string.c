#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int b = 0;

	while (*s != '\0')
	{
		b++;
		s++;
	}
	return (b);
}

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char btc;

	while (i < j)
	{
		btc = s[i];
		s[i] = s[j];
		s[j] = btc;
		i++, j--;
	}
}
