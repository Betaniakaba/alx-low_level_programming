#include <stdio.h>


/**
* main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
char t;

t = 'a';
while (t <= 'z')
{
if ((t != 'e') && (t != 'q'))
{

putchar(t);
t++;
}
else
{
t++;
}
}
putchar('\n');
return (0);
}
