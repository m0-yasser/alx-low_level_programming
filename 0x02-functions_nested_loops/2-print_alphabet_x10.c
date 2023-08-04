#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (char ch = 'a'; ch <= 'z'; ch++)
			(
			 putchar(ch);
			)
		putchar('\n');
	}
}
