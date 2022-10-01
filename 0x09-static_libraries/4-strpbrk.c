#include "main.h"

/**
* _strpbrk - searches a string
* @s: first string
* @accept: second string
* Return: apointer to the byte
*/
char *_strpbrk(char *s, char *accept)
{
	int b, e;

	for (b = 0; *(s + b) != '\0'; b++)
	{
	for (e = 0; *(accept + e) != '\0'; e++)
	{
	if (*(s + b) == *(accept + e))
	return (s + b);
	}
	}
return (0);
}
