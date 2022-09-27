#include "main.h"

/**
*_memcpy - copy bytes of memory from src to dest
* @src: source
* @dest: destination
* @n: byte to be copied
* Return: dest (pointer)
*/
char *_memcpy(char *dest, char *src, unsigned int n)

	int size = n;

	if (size > 0)
	{
		int b;
		for (b = 0; b < size; b++)
		{
			dest[b] = src[b];
		}
	}
	return (dest);
}
