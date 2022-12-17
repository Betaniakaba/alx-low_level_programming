#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: pointer to a memory area
 * @b: constant value
 * @n: number of byte to fill
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int p;

		for (p = 0; p < size; p++)
		{
			s[p] = b;
		}
	}
	return (s);
}
