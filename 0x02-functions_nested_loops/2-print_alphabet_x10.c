#include <stdio.h>

/**
 *
 * * print_alphabet_x10 - Entry Point
 *
 * *
 *
 * * Return: Always 0
 *
 * */

int print_alphabet_x10(void)

{

	char b;

	int e = 0;

	while (e <= 9)

	{

		for (b = 'a'; b <= 'z'; b++)

		{

			putchar(b);

		}

		putchar('\n');

		e++;

	}

	return (0);

}
