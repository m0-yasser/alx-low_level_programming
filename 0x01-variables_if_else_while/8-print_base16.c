#include<stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		if (digit >= 58 && digit <= 96)
			digit++;
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
