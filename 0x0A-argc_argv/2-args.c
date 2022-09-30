#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: arguments of arrays
 * Return: void
 */
int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}
	return (0);
}
