#include "main.h"
/**
 * jack_bauer - function prints minutes of the day of Jack Bauer
 * Return: nothing
 */
int jack_bauer(void)
{
	int i, m;

	for (i = 0; i < 24; i++)
	{
		for (m = 0; m < 60; m++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\n');
			}
	}
}
