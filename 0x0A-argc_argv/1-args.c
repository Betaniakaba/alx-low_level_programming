#include <stdio.h>

/**
 * main - write a program that prints the number of arguments passed through it
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
