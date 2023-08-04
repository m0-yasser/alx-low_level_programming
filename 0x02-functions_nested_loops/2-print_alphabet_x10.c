#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			 putchar(ch);
		}
		putchar('\n');
	}
}
