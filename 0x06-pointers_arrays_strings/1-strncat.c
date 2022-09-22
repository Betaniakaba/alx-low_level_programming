#include "main.h"

/**
 * _strncat - appends src to dest
 * @dest: string appended by src
 * @src: string append to dest
 * @n: largest number of bytes to append
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i,j;

	i=j=0;
	while (*(dest + i))
		i++;
	while (j < n && * (src + j))
	{
		*(dest + i) = *(src + d);
		i++;
		j++;
	}
	if (j < i)
		*(dest + i) = *(src + d);
	return (dest);
}
