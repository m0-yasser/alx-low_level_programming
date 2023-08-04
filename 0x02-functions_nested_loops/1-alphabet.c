#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;

	}
	_putchar('\n');
}
