#include <stdio.h>

int main(void)
{
	int n;

	int a[5];
	int *p;
	a[2] = 1024;
	p = &n;
/*
 * main - magic reference
 * write your line of code here...
 * - you are not allowed to use a
 *   - you are not allowed to modify
 *   - only oen statement
 *   - you are not allowed to code anythign else than this line of code
 *   Return: Void
 */
	*(p+5) = 98
/*  that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
