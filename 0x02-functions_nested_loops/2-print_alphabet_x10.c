#include "main.h"

/**
 *
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: Always 0
 *
 */
void print_alphabet_x10(void)

{

	char b;

	int e = 0;

	while (e <= 9)

	{

		for (b = 'a'; b <= 'z'; b++)

		{

			_putchar(b);

		}

		_putchar('\n');

		e++;

	}

}
