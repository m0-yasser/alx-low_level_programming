#include "main.h"
#include <stdio.h>
/**
 * times_table - print the time table
 * Return: nothing
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			printf("%d", x * y);
			printf(", ");
		}
		printf("\n");
	}
}
