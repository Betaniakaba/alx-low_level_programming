#include "main.h"

/**
* _strspn - get the length of a prefix substring
* @s: The initial segment
* @accept: accepted bytes
* Return: number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	int b, e, t;

	for (b = 0; *(s + b) != '\0'; b++)
	{
		t = 1;
	for (e = 0; *(accept + e) != '\0'; e++)
	{
	if (*(s + b) == *(accept + e))
	{
	t = 0;
	break;
		}
	}
	if (t == 1)
	break;
	}
	return (b);
}
