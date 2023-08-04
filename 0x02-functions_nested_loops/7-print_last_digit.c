#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @i: digit to find the last place of.
 * Return: The last digit.
 */

int print_last_digit(int i)
{
	int last;

if (i < 0)
	last = -1 * (i % 10);
else
	last = i % 10;

	putchar(last + '0');
	return (last);
}
