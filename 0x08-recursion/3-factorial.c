#include "main.h"

/**
 * factorial - return factorial of a given number
 * @n: input numebr
 * Return: -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
