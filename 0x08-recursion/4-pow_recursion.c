#include "main.h"

/**
 * _pow_recursion - return value of x raised to y
 * @x: input integer
 * @y: input power
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
