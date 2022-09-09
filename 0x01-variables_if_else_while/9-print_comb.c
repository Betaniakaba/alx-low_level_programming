#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int b;

b = 48;
while  (b < 58)
{
putchar(b);
if (b !=  57)
{
putchar(44);
putchar(32);
b++;
}
else
{
b++;
}
}
putchar('\n');
return (0);
}
