#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char b;

i = 48;
while  (i < 58)
{
putchar(i);
i++;
}
b = 'a';
while (b <= 'f')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
