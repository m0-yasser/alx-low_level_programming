#include "main.h"
/**
 * times_table - print the times table
 * Return: nothing
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			z = x * y;

			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + 48);
			_putchar((z % 10) + 48);
		}
		_putchar('\n');
	}
}
