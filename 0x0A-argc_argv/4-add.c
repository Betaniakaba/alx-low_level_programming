#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * @argc: argument counts
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		int j;
		char *str;

		str = argv[i];
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] < 48 || str[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
}
for (i = 1; i < argc; i++)
{
	sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
