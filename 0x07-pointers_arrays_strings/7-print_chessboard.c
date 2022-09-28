#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: pointer
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int c, b = 0;

	for (c = 0; c < 64; c++)
	{
	if (c % 8 == 0 && c != 0)
	{
	b = c;
	_putchar('\n');
	}
	_putchar(a[b / 8][c - b]);
	}
	_putchar('\n');
}
