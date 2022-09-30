#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 1 if the program receives other than 2 arguments, 0 on success
 */
int main(int argc, char *argv[])
{
	/* if the argument is different from two */
	if (argc != 3)
/* print error to prompt the user for a different input */
	{
		printf("Error\n");
		return (1);
	}
/* otherwise multiply the two arguments using any OS */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	/* Return 0 if two arguments are passed */
	return (0);
}
