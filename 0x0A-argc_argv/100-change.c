#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins for an amount of money
 * @argc: count of arguments
 * @argv: argument vector
 * Return: least number of coins, 0 if negative amount, 1 if amt nt given
 */
int main(int argc, char *argv[])
{
	/* Declaration*/
	int n, coins = 0;

	if (argc != 2)
	{
	/* print error if the argument passed is different from one*/
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
	/* print 0 if the number passed as the argument is negative*/
		printf("0\n");
		return (0);
	}
	/* convert string to int and calculate coins */
	n = atoi(argv[1]);
	/* number of values given are 25, 10, 5, 2 & 1 for computation*/
	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}
