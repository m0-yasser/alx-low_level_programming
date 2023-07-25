#include<stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
	putchar(x);
		if (x != 57)
			{
			putchar(',');
			putchar(' ');
			}
	x++;
	}
	putchar('\n');
	return (0);
}
