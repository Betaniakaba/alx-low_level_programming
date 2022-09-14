#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
int b, e, t, a, n, i;
for (b = 0; b < 24; b++)
{
t = b / 10;
a = b % 10;
for (e = 0; e < 60; e++)
{
n = e / 10;
i = e % 10;
_putchar('0' + t);
_putchar('0' + a);
_putchar(':');
_putchar('0' + n);
_putchar('0' + i);
_putchar('\n');
}
}
