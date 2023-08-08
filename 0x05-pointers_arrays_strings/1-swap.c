#include "main.h"
/**
 * swap_int - swap values of 2 integers
 * @a: first variable
 * @b: second variable
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
