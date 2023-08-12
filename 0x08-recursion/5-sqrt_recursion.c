#include "main.h"

/**
 * square - return natural square root of a num
 * @x: input number
 * @y: root of number
 *Return: -1 if failed
 */

int square(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y > x)
		return (-1);
	return (square(x, y+1));
}

/**
 * _sqrt_recursiom - return square
 * @n: input number
 * Return: 1
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
