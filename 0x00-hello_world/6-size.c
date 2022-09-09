#include <stdio.h>
/**
 * main - print sizes
 *
 * Return: 0
 */
int main(void)
{
char c;
int i;
long l;
long long d;
float f;
printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %ld byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
