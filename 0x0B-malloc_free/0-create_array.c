#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - create an array of characters
* @size: size of the array
* @c: character
* Return: NULL if size is zero and it fails, a pointer to the array 
*/
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;
/* as per the Q, when the size is zero return NULL */
	if ( size == 0)
	{
		return (NULL);
	}
/* memory allocated, however if insufficient allocation shall fail and return NULL*/
	b = malloc((size) * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		b[i] = c;
		i++;
	}
	b[i] = '\0';
	return (b);
}
