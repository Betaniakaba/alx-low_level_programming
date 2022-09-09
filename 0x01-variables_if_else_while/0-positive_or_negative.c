#include <stdlib.h>
#include <time.h>
# include <stdio.h>
/*more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
* description: using main function
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX /s;
if (n>0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printif("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
return (0);
}
