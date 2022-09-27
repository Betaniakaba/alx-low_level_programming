#include "main.h"

/**
* _strchr - Locate a character in a string
* @c: First character in the string
* @s: string
* Return: the pointer to the third string of character
*/
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
	if (*s == c)
	return (s);
	s++;
	}
return (NULL);
}
