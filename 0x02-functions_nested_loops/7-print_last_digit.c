#include "main.h"
/**
* print_last_digit - function that prints the last digit of a number
* @b: is the int used for the computation
* 
* Return: Value of the last digit
*/
int print_last_digit(int e)
{
int b = e % 10;
if (b < 0)
b *= -1;
_putchar(b + '0');
return (b);
}
