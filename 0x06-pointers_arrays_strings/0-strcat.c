#include "main.h"

/**
 * _strcat - a function that appends one string to another
 * @dest: string that src will be appended on
 * @src: string that will append on dest
 * Return: point to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
