#include <stdio.h>
/**
* print_alphabet - Entry Point
*
* Return: Always 0
*/
int print_alphabet(void)
{
char b;
for (b = 'a'; b <= 'z'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
