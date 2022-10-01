#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 * Return: address of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int b, e;

	b = e = 0;
	while (*(dest + b))
		b++;
	while (e < n && *(src + e))
	{
		*(dest + b) = *(src + e);
		b++;
		e++;
	}
	if (e < n)
		*(dest + b) = *(src + e);
	return (dest);
}
